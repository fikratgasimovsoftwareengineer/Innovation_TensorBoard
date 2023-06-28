# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Innovative_Tensorboard_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Innovative_Tensorboard_autogen.dir/ParseCache.txt"
  "Innovative_Tensorboard_autogen"
  )
endif()
