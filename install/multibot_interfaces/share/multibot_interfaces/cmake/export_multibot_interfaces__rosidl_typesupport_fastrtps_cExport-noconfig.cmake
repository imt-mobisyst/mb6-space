#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "multibot_interfaces::multibot_interfaces__rosidl_typesupport_fastrtps_c" for configuration ""
set_property(TARGET multibot_interfaces::multibot_interfaces__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(multibot_interfaces::multibot_interfaces__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmultibot_interfaces__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_NOCONFIG "libmultibot_interfaces__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS multibot_interfaces::multibot_interfaces__rosidl_typesupport_fastrtps_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_multibot_interfaces::multibot_interfaces__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libmultibot_interfaces__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)