# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wbusch/Descargas/02_templates/alumnos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_algobot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_algobot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_algobot.dir/flags.make

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o: CMakeFiles/test_algobot.dir/flags.make
CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o: ../tests/test_algobot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o -c /home/wbusch/Descargas/02_templates/alumnos/tests/test_algobot.cpp

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wbusch/Descargas/02_templates/alumnos/tests/test_algobot.cpp > CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.i

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wbusch/Descargas/02_templates/alumnos/tests/test_algobot.cpp -o CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.s

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.requires:

.PHONY : CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.requires

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.provides: CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_algobot.dir/build.make CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.provides.build
.PHONY : CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.provides

CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.provides.build: CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o


# Object files for target test_algobot
test_algobot_OBJECTS = \
"CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o"

# External object files for target test_algobot
test_algobot_EXTERNAL_OBJECTS =

test_algobot: CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o
test_algobot: CMakeFiles/test_algobot.dir/build.make
test_algobot: tests/google-test/libgtest.a
test_algobot: tests/google-test/libgtest_main.a
test_algobot: tests/google-test/libgtest.a
test_algobot: CMakeFiles/test_algobot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_algobot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_algobot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_algobot.dir/build: test_algobot

.PHONY : CMakeFiles/test_algobot.dir/build

CMakeFiles/test_algobot.dir/requires: CMakeFiles/test_algobot.dir/tests/test_algobot.cpp.o.requires

.PHONY : CMakeFiles/test_algobot.dir/requires

CMakeFiles/test_algobot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_algobot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_algobot.dir/clean

CMakeFiles/test_algobot.dir/depend:
	cd /home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wbusch/Descargas/02_templates/alumnos /home/wbusch/Descargas/02_templates/alumnos /home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug /home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug /home/wbusch/Descargas/02_templates/alumnos/cmake-build-debug/CMakeFiles/test_algobot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_algobot.dir/depend

