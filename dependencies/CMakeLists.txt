########################################################################
# Nanociv - Copyright (C) 2020 - Vladimir Davidovich
########################################################################

add_library(fc_lua STATIC)
target_include_directories(fc_lua PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/lua-5.3/src
  )
target_compile_options(fc_lua 
  PRIVATE
    -Wno-string-plus-int 
  )
target_compile_definitions(fc_lua 
  PUBLIC
    _CRT_SECURE_NO_WARNINGS 
    _CRT_NONSTDC_NO_WARNINGS 
    _CRT_SECURE_NO_DEPRECATE
  )
target_sources(fc_lua PRIVATE
    lua-5.3/src/lapi.c
    lua-5.3/src/lapi.h
    lua-5.3/src/lauxlib.c
    lua-5.3/src/lauxlib.h
    lua-5.3/src/lbaselib.c
    lua-5.3/src/lbitlib.c
    lua-5.3/src/lcode.c
    lua-5.3/src/lcode.h
    lua-5.3/src/lcorolib.c
    lua-5.3/src/lctype.c
    lua-5.3/src/lctype.h
    lua-5.3/src/ldblib.c
    lua-5.3/src/ldebug.c
    lua-5.3/src/ldebug.h
    lua-5.3/src/ldo.c
    lua-5.3/src/ldo.h
    lua-5.3/src/ldump.c
    lua-5.3/src/lfunc.c
    lua-5.3/src/lfunc.h
    lua-5.3/src/lgc.c
    lua-5.3/src/lgc.h
    lua-5.3/src/linit.c
    lua-5.3/src/liolib.c
    lua-5.3/src/llex.c
    lua-5.3/src/llex.h
    lua-5.3/src/llimits.h
    lua-5.3/src/lmathlib.c
    lua-5.3/src/lmem.c
    lua-5.3/src/lmem.h
    lua-5.3/src/loadlib.c
    lua-5.3/src/lobject.c
    lua-5.3/src/lobject.h
    lua-5.3/src/localluaconf.h
    lua-5.3/src/lopcodes.c
    lua-5.3/src/lopcodes.h
    lua-5.3/src/loslib.c
    lua-5.3/src/lparser.c
    lua-5.3/src/lparser.h
    lua-5.3/src/lprefix.h
    lua-5.3/src/lstate.c
    lua-5.3/src/lstate.h
    lua-5.3/src/lstring.c
    lua-5.3/src/lstring.h
    lua-5.3/src/lstrlib.c
    lua-5.3/src/ltable.c
    lua-5.3/src/ltable.h
    lua-5.3/src/ltablib.c
    lua-5.3/src/ltm.c
    lua-5.3/src/ltm.h
    lua-5.3/src/lua.h
    lua-5.3/src/luaconf.h
    lua-5.3/src/lualib.h
    lua-5.3/src/lundump.c
    lua-5.3/src/lundump.h
    lua-5.3/src/lutf8lib.c
    lua-5.3/src/lvm.c
    lua-5.3/src/lvm.h
    lua-5.3/src/lzio.c
    lua-5.3/src/lzio.h
  )

add_executable(fc_tolua)
target_link_libraries(fc_tolua PRIVATE fc_lua)
target_include_directories(fc_tolua PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/tolua-5.2/include
  )
target_sources(fc_tolua PRIVATE
    tolua-5.2/src/bin/tolua.c
    tolua-5.2/src/bin/toluabind.c
    tolua-5.2/include/tolua.h
    tolua-5.2/src/lib/tolua_event.c
    tolua-5.2/src/lib/tolua_event.h
    tolua-5.2/src/lib/tolua_is.c
    tolua-5.2/src/lib/tolua_map.c
    tolua-5.2/src/lib/tolua_push.c
    tolua-5.2/src/lib/tolua_to.c
  )
