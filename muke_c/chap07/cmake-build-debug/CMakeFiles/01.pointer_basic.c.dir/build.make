# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/panxinjia/gitlab/cpp_base/muke_c/chap07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01.pointer_basic.c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/01.pointer_basic.c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/01.pointer_basic.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01.pointer_basic.c.dir/flags.make

CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o: CMakeFiles/01.pointer_basic.c.dir/flags.make
CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o: /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/01.pointer_basic.c
CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o: CMakeFiles/01.pointer_basic.c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o -MF CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o.d -o CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o -c /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/01.pointer_basic.c

CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/01.pointer_basic.c > CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.i

CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/01.pointer_basic.c -o CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.s

# Object files for target 01.pointer_basic.c
01_pointer_basic_c_OBJECTS = \
"CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o"

# External object files for target 01.pointer_basic.c
01_pointer_basic_c_EXTERNAL_OBJECTS =

01.pointer_basic.c: CMakeFiles/01.pointer_basic.c.dir/01.pointer_basic.c.o
01.pointer_basic.c: CMakeFiles/01.pointer_basic.c.dir/build.make
01.pointer_basic.c: CMakeFiles/01.pointer_basic.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 01.pointer_basic.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/01.pointer_basic.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01.pointer_basic.c.dir/build: 01.pointer_basic.c
.PHONY : CMakeFiles/01.pointer_basic.c.dir/build

CMakeFiles/01.pointer_basic.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/01.pointer_basic.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/01.pointer_basic.c.dir/clean

CMakeFiles/01.pointer_basic.c.dir/depend:
	cd /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/panxinjia/gitlab/cpp_base/muke_c/chap07 /Users/panxinjia/gitlab/cpp_base/muke_c/chap07 /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug /Users/panxinjia/gitlab/cpp_base/muke_c/chap07/cmake-build-debug/CMakeFiles/01.pointer_basic.c.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/01.pointer_basic.c.dir/depend

