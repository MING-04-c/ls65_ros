#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "elite-cs-series-sdk::shared" for configuration ""
set_property(TARGET elite-cs-series-sdk::shared APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(elite-cs-series-sdk::shared PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "ssh"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libelite-cs-series-sdk.so"
  IMPORTED_SONAME_NOCONFIG "libelite-cs-series-sdk.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS elite-cs-series-sdk::shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_elite-cs-series-sdk::shared "${_IMPORT_PREFIX}/lib/libelite-cs-series-sdk.so" )

# Import target "elite-cs-series-sdk::static" for configuration ""
set_property(TARGET elite-cs-series-sdk::static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(elite-cs-series-sdk::static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libelite-cs-series-sdk.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS elite-cs-series-sdk::static )
list(APPEND _IMPORT_CHECK_FILES_FOR_elite-cs-series-sdk::static "${_IMPORT_PREFIX}/lib/libelite-cs-series-sdk.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
