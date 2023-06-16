# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/testNetwork_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/testNetwork_autogen.dir/ParseCache.txt"
  "testNetwork_autogen"
  )
endif()
