# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sudoku-solver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sudoku-solver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sudoku-solver.dir/flags.make

CMakeFiles/sudoku-solver.dir/main.cpp.obj: CMakeFiles/sudoku-solver.dir/flags.make
CMakeFiles/sudoku-solver.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sudoku-solver.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sudoku-solver.dir\main.cpp.obj -c C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\main.cpp

CMakeFiles/sudoku-solver.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sudoku-solver.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\main.cpp > CMakeFiles\sudoku-solver.dir\main.cpp.i

CMakeFiles/sudoku-solver.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sudoku-solver.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\main.cpp -o CMakeFiles\sudoku-solver.dir\main.cpp.s

CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.obj: CMakeFiles/sudoku-solver.dir/flags.make
CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.obj: ../SudokuSolver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sudoku-solver.dir\SudokuSolver.cpp.obj -c C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\SudokuSolver.cpp

CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\SudokuSolver.cpp > CMakeFiles\sudoku-solver.dir\SudokuSolver.cpp.i

CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\SudokuSolver.cpp -o CMakeFiles\sudoku-solver.dir\SudokuSolver.cpp.s

# Object files for target sudoku-solver
sudoku__solver_OBJECTS = \
"CMakeFiles/sudoku-solver.dir/main.cpp.obj" \
"CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.obj"

# External object files for target sudoku-solver
sudoku__solver_EXTERNAL_OBJECTS =

../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/main.cpp.obj
../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/SudokuSolver.cpp.obj
../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/build.make
../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/linklibs.rsp
../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/objects1.rsp
../sudoku-solver.exe: CMakeFiles/sudoku-solver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ..\sudoku-solver.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sudoku-solver.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sudoku-solver.dir/build: ../sudoku-solver.exe

.PHONY : CMakeFiles/sudoku-solver.dir/build

CMakeFiles/sudoku-solver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sudoku-solver.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sudoku-solver.dir/clean

CMakeFiles/sudoku-solver.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug C:\Users\hocke\Desktop\GitHubProjects\sudoku-solver\cmake-build-debug\CMakeFiles\sudoku-solver.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sudoku-solver.dir/depend
