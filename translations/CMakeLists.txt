########################################################################
# Nanociv - Copyright (C) 2020 - Vladimir Davidovich
########################################################################

set(FC_TEXT_FILES
    freeciv/
    nations/
  )

add_custom_command(
    COMMAND ${ZIPTOOL_EXECUTABLE} -c "fc_text.czar" ${FC_TEXT_FILES}
    OUTPUT  "fc_text.czar"
    DEPENDS ${FC_TEXT_FILES}
  )
add_custom_target(fc_text DEPENDS "fc_text.czar")

add_subdirectory(freeciv)
add_subdirectory(nations)
add_dependencies(fc_text pofiles)
