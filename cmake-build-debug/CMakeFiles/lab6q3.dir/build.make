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
include CMakeFiles/lab6q3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab6q3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab6q3.dir/flags.make

CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.obj: CMakeFiles/lab6q3.dir/flags.make
CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.obj: ../lab6/lab6_q3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\lab6q3.dir\lab6\lab6_q3.c.obj -c "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q3.c"

CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q3.c" > CMakeFiles\lab6q3.dir\lab6\lab6_q3.c.i

CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\lab6\lab6_q3.c" -o CMakeFiles\lab6q3.dir\lab6\lab6_q3.c.s

# Object files for target lab6q3
lab6q3_OBJECTS = \
"CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.obj"

# External object files for target lab6q3
lab6q3_EXTERNAL_OBJECTS =

lab6q3.exe: CMakeFiles/lab6q3.dir/lab6/lab6_q3.c.obj
lab6q3.exe: CMakeFiles/lab6q3.dir/build.make
lab6q3.exe: CMakeFiles/lab6q3.dir/linklibs.rsp
lab6q3.exe: CMakeFiles/lab6q3.dir/objects1.rsp
lab6q3.exe: CMakeFiles/lab6q3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab6q3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab6q3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab6q3.dir/build: lab6q3.exe
.PHONY : CMakeFiles/lab6q3.dir/build

CMakeFiles/lab6q3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab6q3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab6q3.dir/clean

CMakeFiles/lab6q3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug" "D:\UOM degree\L01S01\IN 1100_Programming fudamentals\Clion editor\Projects\untitled\cmake-build-debug\CMakeFiles\lab6q3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab6q3.dir/depend

