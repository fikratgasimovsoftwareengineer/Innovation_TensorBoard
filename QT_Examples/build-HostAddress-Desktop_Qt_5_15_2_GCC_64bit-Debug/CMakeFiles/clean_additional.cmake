# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/HostAddress_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/HostAddress_autogen.dir/ParseCache.txt"
  "HostAddress_autogen"
  )
endif()
