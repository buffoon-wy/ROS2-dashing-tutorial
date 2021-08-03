# CMake generated Testfile for 
# Source directory: /home/buffoon/dev_ws/src/mymsgs
# Build directory: /home/buffoon/dev_ws/build/mymsgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/buffoon/dev_ws/build/mymsgs/test_results/mymsgs/lint_cmake.xunit.xml" "--package-name" "mymsgs" "--output-file" "/home/buffoon/dev_ws/build/mymsgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/buffoon/dev_ws/build/mymsgs/test_results/mymsgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/buffoon/dev_ws/src/mymsgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/buffoon/dev_ws/build/mymsgs/test_results/mymsgs/xmllint.xunit.xml" "--package-name" "mymsgs" "--output-file" "/home/buffoon/dev_ws/build/mymsgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/buffoon/dev_ws/build/mymsgs/test_results/mymsgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/buffoon/dev_ws/src/mymsgs")
subdirs("mymsgs__py")
