# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yanan/CLionProjects/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanan/CLionProjects/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c.dir/flags.make

CMakeFiles/c.dir/struct2.c.o: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/struct2.c.o: struct2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanan/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c.dir/struct2.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c.dir/struct2.c.o   -c /Users/yanan/CLionProjects/untitled1/cmake-build-debug/struct2.c

CMakeFiles/c.dir/struct2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/struct2.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanan/CLionProjects/untitled1/cmake-build-debug/struct2.c > CMakeFiles/c.dir/struct2.c.i

CMakeFiles/c.dir/struct2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/struct2.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanan/CLionProjects/untitled1/cmake-build-debug/struct2.c -o CMakeFiles/c.dir/struct2.c.s

CMakeFiles/c.dir/struct2.c.o.requires:

.PHONY : CMakeFiles/c.dir/struct2.c.o.requires

CMakeFiles/c.dir/struct2.c.o.provides: CMakeFiles/c.dir/struct2.c.o.requires
	$(MAKE) -f CMakeFiles/c.dir/build.make CMakeFiles/c.dir/struct2.c.o.provides.build
.PHONY : CMakeFiles/c.dir/struct2.c.o.provides

CMakeFiles/c.dir/struct2.c.o.provides.build: CMakeFiles/c.dir/struct2.c.o


# Object files for target c
c_OBJECTS = \
"CMakeFiles/c.dir/struct2.c.o"

# External object files for target c
c_EXTERNAL_OBJECTS =

c : CMakeFiles/c.dir/struct2.c.o
c : CMakeFiles/c.dir/build.make
c : CMakeFiles/c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanan/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c.dir/build: c

.PHONY : CMakeFiles/c.dir/build

CMakeFiles/c.dir/requires: CMakeFiles/c.dir/struct2.c.o.requires

.PHONY : CMakeFiles/c.dir/requires

CMakeFiles/c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c.dir/clean

CMakeFiles/c.dir/depend:
	cd /Users/yanan/CLionProjects/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanan/CLionProjects/untitled1 /Users/yanan/CLionProjects/untitled1 /Users/yanan/CLionProjects/untitled1/cmake-build-debug /Users/yanan/CLionProjects/untitled1/cmake-build-debug /Users/yanan/CLionProjects/untitled1/cmake-build-debug/CMakeFiles/c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c.dir/depend

