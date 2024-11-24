cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

project(cs202)

# Set paths for OpenCV, SFML, and matplotlib-cpp

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR /Users/quannguyennam/Documents/Projects/KANS/opencv/build)

# Find required packages
find_package(OpenCV 4 REQUIRED)

# Python dependencies

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS})

# Add the main executable
add_executable(${PROJECT_NAME} main.cpp)

# Link libraries
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

# Set C++ standard to C++17
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# Handle MSVC specific settings
if (MSVC)
  file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*.dll")
  add_custom_command(TARGET ${PROJECT_NAME}
                     POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E copy_if_different
                     ${TORCH_DLLS}
                     $<TARGET_FILE_DIR:${PROJECT_NAME}>)
endif (MSVC)
