########################################################################
# Nanociv - Copyright (C) 2020 - Vladimir Davidovich
########################################################################

add_data(fc_data ${CMAKE_CURRENT_SOURCE_DIR} 
  INCLUDES
    amplio2.tilespec
    civ2civ3.serv
    classic.serv
    default.serv
    helpdata.txt
    hex2t.tilespec
    hexemplio.tilespec
    multiplayer.serv
    sandbox.serv
    stub.serv
    trident.tilespec
    amplio2/
    buildings/
    civ2civ3/
    classic/
    default/
    flags/
    hex2t/
    hexemplio/
    icons/
    misc/
    multiplayer/
    nation/
    override/
    sandbox/
    stub/
    trident/
    wonders/
  EXCLUDES
    Makefile.am
    *.svg
  )
