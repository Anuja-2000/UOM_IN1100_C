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
include CMakeFiles/assignments.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/assignments.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignments.dir/flags.make

CMakeFiles/assignments.dir/assignments/assignment1.c.obj: CMakeFiles/assignments.dir/flags.make
CMakeFiles/assignments.dir/assignments/assignment1.c.obj: ../assignments/assignment1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assignments.dir/assignments/assignment1.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\assignments.dir\assignments\assignment1.c.obj -c "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\assignment1.c"

CMakeFiles/assignments.dir/assignments/assignment1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assignments.dir/assignments/assignment1.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\assignment1.c" > CMakeFiles\assignments.dir\assignments\assignment1.c.i

CMakeFiles/assignments.dir/assignments/assignment1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assignments.dir/assignments/assignment1.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\assignments\assignment1.c" -o CMakeFiles\assignments.dir\assignments\assignment1.c.s

# Object files for target assignments
assignments_OBJECTS = \
"CMakeFiles/assignments.dir/assignments/assignment1.c.obj"

# External object files for target assignments
assignments_EXTERNAL_OBJECTS =

assignments.exe: CMakeFiles/assignments.dir/assignments/assignment1.c.obj
assignments.exe: CMakeFiles/assignments.dir/build.make
assignments.exe: CMakeFiles/assignments.dir/linklibs.rsp
assignments.exe: CMakeFiles/assignments.dir/objects1.rsp
assignments.exe: CMakeFiles/assignments.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable assignments.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\assignments.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignments.dir/build: assignments.exe
.PHONY : CMakeFiles/assignments.dir/build

CMakeFiles/assignments.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\assignments.dir\cmake_clean.cmake
.PHONY : CMakeFiles/assignments.dir/clean

CMakeFiles/assignments.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles\assignments.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/assignments.dir/depend

