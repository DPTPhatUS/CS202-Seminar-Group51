# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/quannguyennam/Documents/Projects/test/CS202

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/quannguyennam/Documents/Projects/test/CS202/build

# Include any dependencies generated for this target.
include CMakeFiles/cs202.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cs202.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cs202.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cs202.dir/flags.make

CMakeFiles/cs202.dir/main.cpp.o: CMakeFiles/cs202.dir/flags.make
CMakeFiles/cs202.dir/main.cpp.o: /Users/quannguyennam/Documents/Projects/test/CS202/main.cpp
CMakeFiles/cs202.dir/main.cpp.o: CMakeFiles/cs202.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/quannguyennam/Documents/Projects/test/CS202/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cs202.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cs202.dir/main.cpp.o -MF CMakeFiles/cs202.dir/main.cpp.o.d -o CMakeFiles/cs202.dir/main.cpp.o -c /Users/quannguyennam/Documents/Projects/test/CS202/main.cpp

CMakeFiles/cs202.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cs202.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/quannguyennam/Documents/Projects/test/CS202/main.cpp > CMakeFiles/cs202.dir/main.cpp.i

CMakeFiles/cs202.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cs202.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/quannguyennam/Documents/Projects/test/CS202/main.cpp -o CMakeFiles/cs202.dir/main.cpp.s

# Object files for target cs202
cs202_OBJECTS = \
"CMakeFiles/cs202.dir/main.cpp.o"

# External object files for target cs202
cs202_EXTERNAL_OBJECTS =

cs202: CMakeFiles/cs202.dir/main.cpp.o
cs202: CMakeFiles/cs202.dir/build.make
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_gapi.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_highgui.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_ml.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_objdetect.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_photo.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_stitching.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_video.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_videoio.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_imgcodecs.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_dnn.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_calib3d.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_features2d.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_flann.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_imgproc.4.10.0.dylib
cs202: /Users/quannguyennam/Documents/Projects/KANS/opencv/build/lib/libopencv_core.4.10.0.dylib
cs202: CMakeFiles/cs202.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/quannguyennam/Documents/Projects/test/CS202/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cs202"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cs202.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cs202.dir/build: cs202
.PHONY : CMakeFiles/cs202.dir/build

CMakeFiles/cs202.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cs202.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cs202.dir/clean

CMakeFiles/cs202.dir/depend:
	cd /Users/quannguyennam/Documents/Projects/test/CS202/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/quannguyennam/Documents/Projects/test/CS202 /Users/quannguyennam/Documents/Projects/test/CS202 /Users/quannguyennam/Documents/Projects/test/CS202/build /Users/quannguyennam/Documents/Projects/test/CS202/build /Users/quannguyennam/Documents/Projects/test/CS202/build/CMakeFiles/cs202.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cs202.dir/depend

