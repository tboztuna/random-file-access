# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/skyline/CLionProjects/random-file-access

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/skyline/CLionProjects/random-file-access/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/random_file_access.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/random_file_access.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/random_file_access.dir/flags.make

CMakeFiles/random_file_access.dir/main.cpp.o: CMakeFiles/random_file_access.dir/flags.make
CMakeFiles/random_file_access.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/skyline/CLionProjects/random-file-access/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/random_file_access.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/random_file_access.dir/main.cpp.o -c /Users/skyline/CLionProjects/random-file-access/main.cpp

CMakeFiles/random_file_access.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/random_file_access.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/skyline/CLionProjects/random-file-access/main.cpp > CMakeFiles/random_file_access.dir/main.cpp.i

CMakeFiles/random_file_access.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/random_file_access.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/skyline/CLionProjects/random-file-access/main.cpp -o CMakeFiles/random_file_access.dir/main.cpp.s

CMakeFiles/random_file_access.dir/Employee.cpp.o: CMakeFiles/random_file_access.dir/flags.make
CMakeFiles/random_file_access.dir/Employee.cpp.o: ../Employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/skyline/CLionProjects/random-file-access/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/random_file_access.dir/Employee.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/random_file_access.dir/Employee.cpp.o -c /Users/skyline/CLionProjects/random-file-access/Employee.cpp

CMakeFiles/random_file_access.dir/Employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/random_file_access.dir/Employee.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/skyline/CLionProjects/random-file-access/Employee.cpp > CMakeFiles/random_file_access.dir/Employee.cpp.i

CMakeFiles/random_file_access.dir/Employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/random_file_access.dir/Employee.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/skyline/CLionProjects/random-file-access/Employee.cpp -o CMakeFiles/random_file_access.dir/Employee.cpp.s

# Object files for target random_file_access
random_file_access_OBJECTS = \
"CMakeFiles/random_file_access.dir/main.cpp.o" \
"CMakeFiles/random_file_access.dir/Employee.cpp.o"

# External object files for target random_file_access
random_file_access_EXTERNAL_OBJECTS =

random_file_access: CMakeFiles/random_file_access.dir/main.cpp.o
random_file_access: CMakeFiles/random_file_access.dir/Employee.cpp.o
random_file_access: CMakeFiles/random_file_access.dir/build.make
random_file_access: CMakeFiles/random_file_access.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/skyline/CLionProjects/random-file-access/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable random_file_access"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/random_file_access.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/random_file_access.dir/build: random_file_access

.PHONY : CMakeFiles/random_file_access.dir/build

CMakeFiles/random_file_access.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/random_file_access.dir/cmake_clean.cmake
.PHONY : CMakeFiles/random_file_access.dir/clean

CMakeFiles/random_file_access.dir/depend:
	cd /Users/skyline/CLionProjects/random-file-access/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/skyline/CLionProjects/random-file-access /Users/skyline/CLionProjects/random-file-access /Users/skyline/CLionProjects/random-file-access/cmake-build-debug /Users/skyline/CLionProjects/random-file-access/cmake-build-debug /Users/skyline/CLionProjects/random-file-access/cmake-build-debug/CMakeFiles/random_file_access.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/random_file_access.dir/depend
