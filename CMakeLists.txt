cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)

project(paramesh LANGUAGES CXX VERSION 1.0.0)

set(paramesh_SRC
  mesh.cpp
  mesh_generators.cpp
)
set(paramesh_HDR
  mesh_generators.hpp
  mesh.hpp
)
add_library(paramesh SHARED ${paramesh_SRC} ${paramesh_HDR})
add_executable(paramesh_test paramesh_test.cpp)
target_link_libraries(paramesh_test PUBLIC paramesh)
