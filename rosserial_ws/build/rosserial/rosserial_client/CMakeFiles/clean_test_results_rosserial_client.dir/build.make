# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nichotelo/ros/rosserial_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nichotelo/ros/rosserial_ws/build

# Utility rule file for clean_test_results_rosserial_client.

# Include the progress variables for this target.
include rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/progress.make

rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client:
	cd /home/nichotelo/ros/rosserial_ws/build/rosserial/rosserial_client && /usr/bin/python3 /opt/ros/noetic/share/catkin/cmake/test/remove_test_results.py /home/nichotelo/ros/rosserial_ws/build/test_results/rosserial_client

clean_test_results_rosserial_client: rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client
clean_test_results_rosserial_client: rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/build.make

.PHONY : clean_test_results_rosserial_client

# Rule to build all files generated by this target.
rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/build: clean_test_results_rosserial_client

.PHONY : rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/build

rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/clean:
	cd /home/nichotelo/ros/rosserial_ws/build/rosserial/rosserial_client && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_rosserial_client.dir/cmake_clean.cmake
.PHONY : rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/clean

rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/depend:
	cd /home/nichotelo/ros/rosserial_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nichotelo/ros/rosserial_ws/src /home/nichotelo/ros/rosserial_ws/src/rosserial/rosserial_client /home/nichotelo/ros/rosserial_ws/build /home/nichotelo/ros/rosserial_ws/build/rosserial/rosserial_client /home/nichotelo/ros/rosserial_ws/build/rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rosserial/rosserial_client/CMakeFiles/clean_test_results_rosserial_client.dir/depend

