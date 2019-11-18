cmake_minimum_required(VERSION "3.10.0")

#Set target output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

option(BUILD_SHARED_LIBS "True when building a shared library" Ture)

project("IVulkan")

add_subdirectory("IVulkan")

add_subdirectory("Examples")