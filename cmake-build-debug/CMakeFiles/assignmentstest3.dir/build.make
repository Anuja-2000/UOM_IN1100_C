# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Editor\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Editor\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/assignmentstest3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/assignmentstest3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignmentstest3.dir/flags.make

CMakeFiles/assignmentstest3.dir/assignments/test.c.obj: CMakeFiles/assignmentstest3.dir/flags.make
CMakeFiles/assignmentstest3.dir/assignments/test.c.obj: ../assignments/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assignmentstest3.dir/assignments/test.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignmentstest3.dir\assignments\test.c.obj -c "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\test.c"

CMakeFiles/assignmentstest3.dir/assignments/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignmentstest3.dir/assignments/test.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\test.c" > CMakeFiles\assignmentstest3.dir\assignments\test.c.i

CMakeFiles/assignmentstest3.dir/assignments/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignmentstest3.dir/assignments/test.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\test.c" -o CMakeFiles\assignmentstest3.dir\assignments\test.c.s

# Object files for target assignmentstest3
assignmentstest3_OBJECTS = \
"CMakeFiles/assignmentstest3.dir/assignments/test.c.obj"

# External object files for target assignmentstest3
assignmentstest3_EXTERNAL_OBJECTS =

assignmentstest3.exe: CMakeFiles/assignmentstest3.dir/assignments/test.c.obj
assignmentstest3.exe: CMakeFiles/assignmentstest3.dir/build.make
assignmentstest3.exe: CMakeFiles/assignmentstest3.dir/linklibs.rsp
assignmentstest3.exe: CMakeFiles/assignmentstest3.dir/objects1.rsp
assignmentstest3.exe: CMakeFiles/assignmentstest3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable assignmentstest3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\assignmentstest3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignmentstest3.dir/build: assignmentstest3.exe
.PHONY : CMakeFiles/assignmentstest3.dir/build

CMakeFiles/assignmentstest3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\assignmentstest3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/assignmentstest3.dir/clean

CMakeFiles/assignmentstest3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles\assignmentstest3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/assignmentstest3.dir/depend
