# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug

# Utility rule file for CalcLib_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/CalcLib_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CalcLib_autogen.dir/progress.make

CMakeFiles/CalcLib_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target CalcLib"
	/usr/bin/cmake -E cmake_autogen /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles/CalcLib_autogen.dir/AutogenInfo.json Debug

CalcLib_autogen: CMakeFiles/CalcLib_autogen
CalcLib_autogen: CMakeFiles/CalcLib_autogen.dir/build.make
.PHONY : CalcLib_autogen

# Rule to build all files generated by this target.
CMakeFiles/CalcLib_autogen.dir/build: CalcLib_autogen
.PHONY : CMakeFiles/CalcLib_autogen.dir/build

CMakeFiles/CalcLib_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CalcLib_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CalcLib_autogen.dir/clean

CMakeFiles/CalcLib_autogen.dir/depend:
	cd /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles/CalcLib_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CalcLib_autogen.dir/depend

