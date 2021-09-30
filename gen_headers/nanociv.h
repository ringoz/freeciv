/* This header provides some portability shims. */
#pragma once

#include <OS/os.h>
#include <OS/file.h>
#include <OS/formatted.h>
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>

#ifndef _WIN32
#include <alloca.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#undef  SEEK_SET
#define SEEK_SET OS_SEEK_SET
#undef  SEEK_CUR
#define SEEK_CUR OS_SEEK_CUR
#undef  SEEK_END
#define SEEK_END OS_SEEK_END

#define FILE     OSFile
#define fopen    osFopen
#define fclose   osFclose
#define fflush   osFflush
#define fread    osFread
#define fwrite   osFwrite
#define getc     osGetc
#define fgetc    osGetc
#define fputc    osPutc
#define fgets    osFgets
#define feof     osFEOF
#define ferror   osFerror
#define clearerr osClearerr
#define fseek    osFseek
#define ftell    osFtell
#define fstat    osFstat

static inline int osUngetc(int c, OSFile *stream)
{
  return osFseek(stream, -1, OS_SEEK_CUR) ? -1 : c;
}
#define ungetc osUngetc

static inline int osFputs(const char *string, OSFile *file)
{
  osFprintf(file, "%s", string);
  return 0;
}
#define fputs osFputs

static inline void osRewind(OSFile *file) 
{
  osFseek(file, 0, OS_SEEK_SET);
  osClearerr(file);
}
#define rewind osRewind

static inline OSFile *osFreopen(const char *pathname, const char *mode, OSFile *file) 
{
  osFclose(file);
  return osFopen(pathname, mode);
}
#define freopen osFreopen

static inline OSFile *osTmpfile(void)
{
  osRemove("/tmp/nanociv");
  return osFopen("/tmp/nanociv", "w+");
}
#define tmpfile osTmpfile

#define setvbuf(f, b, t, s) 0
#define system osSystem

OS_API OSFile *OSFileSystemCrt_in();
#undef stdin
#define stdin OSFileSystemCrt_in()

OS_API OSFile *OSFileSystemDbg_out();
#undef stdout
#define stdout OSFileSystemDbg_out()

OS_API OSFile *OSFileSystemDbg_err();
#undef stderr
#define stderr OSFileSystemDbg_err()

#undef  S_ISREG
#define S_ISREG OS_ISREG
#undef  S_ISDIR
#define S_ISDIR OS_ISDIR

#define DIR      OSDir
#define dirent   OSDirent
#define opendir  osOpenDir
#define readdir  osReadDir
#define closedir osCloseDir

#define vprintf   osVprintf
#define sprintf   osSprintf
#define vsprintf  osVsprintf
#define snprintf  osSnprintf
#define vsnprintf osVsnprintf
#define fprintf   osFprintf
#define vfprintf  osVfprintf
#define sscanf    osSscanf
#define vsscanf   osVsscanf
#define fscanf    osFscanf
#define vfscanf   osVfscanf

#ifdef __cplusplus
}
#endif

#define _CSTDIO_
#undef  _FPOSOFF
#define _FPOSOFF(fp)  ((off_t)(fp))
