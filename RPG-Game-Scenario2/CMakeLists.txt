# CMakeList.txt : CMake project for RPG-Game-Scenario2, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (RPG-Game-Scenario2 "main.cpp" "player.h" "player.cpp" "warrior.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET RPG-Game-Scenario2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
