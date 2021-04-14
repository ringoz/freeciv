########################################################################
# Nanociv - Copyright (C) 2020 - Vladimir Davidovich
########################################################################

set(FC_DATA_FILES
    amplio2.tilespec
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
    classic/
    default/
    flags/
    fonts/
    hex2t/
    hexemplio/
    icons/
    misc/
    multiplayer/
    nation/
    override/
    sandbox/
    scenarios/
    stub/
    trident/
    wonders/
  )

add_custom_command(
    COMMAND ${ZIPTOOL_EXECUTABLE} -c "${CMAKE_CURRENT_BINARY_DIR}/fc_data.czar" ${FC_DATA_FILES}
    OUTPUT  "fc_data.czar"
    DEPENDS ${FC_DATA_FILES}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
add_custom_target(fc_data DEPENDS "fc_data.czar")
