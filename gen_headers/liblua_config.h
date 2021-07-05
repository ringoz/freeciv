/***********************************************************************
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

/* This header is generated from gen_headers/liblua_config.h.in.
   It includes definitions needed by the in-tree liblua compilation. */

#ifndef FC__LIBLUA_CONFIG_H
#define FC__LIBLUA_CONFIG_H

/* mkstemp() available */
#ifdef __ANDROID__
#define HAVE_MKSTEMP 1
#endif

/* unistd.h available */
#define FREECIV_HAVE_UNISTD_H 1

/* popen() available */
/* #undef HAVE_POPEN */

/* pclose() available */
/* #undef HAVE_PCLOSE */

/* _longjmp() available */
/* #undef HAVE__LONGJMP */

/* _setjmp() available */
#define HAVE__SETJMP 1

/* gmtime_r() available */
/* #undef HAVE_GMTIME_R */

/* localtime_r() available */
/* #undef HAVE_LOCALTIME_R */

/* fseeko() available */
/* #undef HAVE_FSEEKO */

#endif /* FC__LIBLUA_CONFIG_H */

#include <nanociv.h>
#define _DARWIN_C_SOURCE
#define LUA_USE_C89 1
#define lua_getlocaledecpoint()		('.')
#define l_signalT  int
