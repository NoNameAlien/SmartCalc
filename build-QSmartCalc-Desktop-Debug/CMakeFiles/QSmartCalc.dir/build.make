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

# Include any dependencies generated for this target.
include CMakeFiles/QSmartCalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/QSmartCalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/QSmartCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QSmartCalc.dir/flags.make

CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/QSmartCalc.dir/flags.make
CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o: QSmartCalc_autogen/mocs_compilation.cpp
CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/QSmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o -c /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/QSmartCalc_autogen/mocs_compilation.cpp

CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/QSmartCalc_autogen/mocs_compilation.cpp > CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.i

CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/QSmartCalc_autogen/mocs_compilation.cpp -o CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.s

CMakeFiles/QSmartCalc.dir/main.cpp.o: CMakeFiles/QSmartCalc.dir/flags.make
CMakeFiles/QSmartCalc.dir/main.cpp.o: /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/main.cpp
CMakeFiles/QSmartCalc.dir/main.cpp.o: CMakeFiles/QSmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QSmartCalc.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QSmartCalc.dir/main.cpp.o -MF CMakeFiles/QSmartCalc.dir/main.cpp.o.d -o CMakeFiles/QSmartCalc.dir/main.cpp.o -c /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/main.cpp

CMakeFiles/QSmartCalc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QSmartCalc.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/main.cpp > CMakeFiles/QSmartCalc.dir/main.cpp.i

CMakeFiles/QSmartCalc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QSmartCalc.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/main.cpp -o CMakeFiles/QSmartCalc.dir/main.cpp.s

CMakeFiles/QSmartCalc.dir/maincalc.cpp.o: CMakeFiles/QSmartCalc.dir/flags.make
CMakeFiles/QSmartCalc.dir/maincalc.cpp.o: /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/maincalc.cpp
CMakeFiles/QSmartCalc.dir/maincalc.cpp.o: CMakeFiles/QSmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/QSmartCalc.dir/maincalc.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QSmartCalc.dir/maincalc.cpp.o -MF CMakeFiles/QSmartCalc.dir/maincalc.cpp.o.d -o CMakeFiles/QSmartCalc.dir/maincalc.cpp.o -c /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/maincalc.cpp

CMakeFiles/QSmartCalc.dir/maincalc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QSmartCalc.dir/maincalc.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/maincalc.cpp > CMakeFiles/QSmartCalc.dir/maincalc.cpp.i

CMakeFiles/QSmartCalc.dir/maincalc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QSmartCalc.dir/maincalc.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/maincalc.cpp -o CMakeFiles/QSmartCalc.dir/maincalc.cpp.s

CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o: CMakeFiles/QSmartCalc.dir/flags.make
CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o: /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/qcustomplot.cpp
CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o: CMakeFiles/QSmartCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o -MF CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o.d -o CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o -c /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/qcustomplot.cpp

CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/qcustomplot.cpp > CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.i

CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc/qcustomplot.cpp -o CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.s

# Object files for target QSmartCalc
QSmartCalc_OBJECTS = \
"CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/QSmartCalc.dir/main.cpp.o" \
"CMakeFiles/QSmartCalc.dir/maincalc.cpp.o" \
"CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o"

# External object files for target QSmartCalc
QSmartCalc_EXTERNAL_OBJECTS =

QSmartCalc: CMakeFiles/QSmartCalc.dir/QSmartCalc_autogen/mocs_compilation.cpp.o
QSmartCalc: CMakeFiles/QSmartCalc.dir/main.cpp.o
QSmartCalc: CMakeFiles/QSmartCalc.dir/maincalc.cpp.o
QSmartCalc: CMakeFiles/QSmartCalc.dir/qcustomplot.cpp.o
QSmartCalc: CMakeFiles/QSmartCalc.dir/build.make
QSmartCalc: libCalcLib.so
QSmartCalc: /usr/lib/x86_64-linux-gnu/libQt6PrintSupport.so.6.4.2
QSmartCalc: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
QSmartCalc: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
QSmartCalc: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
QSmartCalc: /usr/lib/x86_64-linux-gnu/libGLX.so
QSmartCalc: /usr/lib/x86_64-linux-gnu/libOpenGL.so
QSmartCalc: CMakeFiles/QSmartCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable QSmartCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QSmartCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QSmartCalc.dir/build: QSmartCalc
.PHONY : CMakeFiles/QSmartCalc.dir/build

CMakeFiles/QSmartCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QSmartCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QSmartCalc.dir/clean

CMakeFiles/QSmartCalc.dir/depend:
	cd /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc /home/anonimus/C7_SmartCalc_v1.0-1/src/QSmartCalc /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug /home/anonimus/C7_SmartCalc_v1.0-1/src/build-QSmartCalc-Desktop-Debug/CMakeFiles/QSmartCalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QSmartCalc.dir/depend

