# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appqmlMap_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appqmlMap_autogen.dir/ParseCache.txt"
  "appqmlMap_autogen"
  )
endif()
