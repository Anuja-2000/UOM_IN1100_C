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
include CMakeFiles/lab6q8a.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab6q8a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab6q8a.dir/flags.make

CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.obj: CMakeFiles/lab6q8a.dir/flags.make
CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.obj: ../lab6/lab6_q8_a.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab6q8a.dir\lab6\lab6_q8_a.c.obj -c "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q8_a.c"

CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q8_a.c" > CMakeFiles\lab6q8a.dir\lab6\lab6_q8_a.c.i

CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q8_a.c" -o CMakeFiles\lab6q8a.dir\lab6\lab6_q8_a.c.s

# Object files for target lab6q8a
lab6q8a_OBJECTS = \
"CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.obj"

# External object files for target lab6q8a
lab6q8a_EXTERNAL_OBJECTS =

lab6q8a.exe: CMakeFiles/lab6q8a.dir/lab6/lab6_q8_a.c.obj
lab6q8a.exe: CMakeFiles/lab6q8a.dir/build.make
lab6q8a.exe: CMakeFiles/lab6q8a.dir/linklibs.rsp
lab6q8a.exe: CMakeFiles/lab6q8a.dir/objects1.rsp
lab6q8a.exe: CMakeFiles/lab6q8a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab6q8a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab6q8a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab6q8a.dir/build: lab6q8a.exe
.PHONY : CMakeFiles/lab6q8a.dir/build

CMakeFiles/lab6q8a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab6q8a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab6q8a.dir/clean

CMakeFiles/lab6q8a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles\lab6q8a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab6q8a.dir/depend

