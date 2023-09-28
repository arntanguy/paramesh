cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME paramesh)
set(PROJECT_DESCRIPTION "paramesh")
set(PROJECT_URL https://github.com/arntanguy/paramesh)
set(PROJECT_VERSION 1.0)
set(PROJECT_USE_CMAKE_EXPORT TRUE)
set(INSTALL_DOCUMENTATION OFF CACHE BOOL "")
set(INSTALL_GENERATED_HEADERS OFF CACHE BOOL "" FORCE)
set(INSTALL_PKG_CONFIG_FILE OFF CACHE BOOL "" FORCE)
set(CXX_DISABLE_WERROR ON)

include(cmake/base.cmake)

project(paramesh LANGUAGES CXX VERSION 1.0.0)

set(paramesh_SRC
  src/mesh.cpp
  src/mesh_generators.cpp
)
set(paramesh_HDR
  include/paramesh/mesh_generators.hpp
  include/paramesh/mesh.hpp
)
add_library(paramesh SHARED ${paramesh_SRC} ${paramesh_HDR})
target_include_directories(paramesh PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:include>)

install(TARGETS paramesh
 EXPORT "${TARGETS_EXPORT_NAME}"
 RUNTIME DESTINATION bin
 LIBRARY DESTINATION lib
 ARCHIVE DESTINATION lib
)

install(
  DIRECTORY include
  DESTINATION ${CMAKE_INSTALL_PREFIX}
  FILES_MATCHING
  REGEX "h(pp)?$"
)

add_executable(paramesh_test paramesh_test.cpp)
target_link_libraries(paramesh_test PUBLIC paramesh)
