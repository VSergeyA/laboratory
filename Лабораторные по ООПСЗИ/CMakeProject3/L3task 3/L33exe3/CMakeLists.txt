# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (L33exe3 "maid.c")
target_link_libraries(L33exe3 L3task3lib1)
target_link_libraries(L33exe3 L3task3lib2)
target_link_libraries(L33exe3 L3task3lib3)
target_link_libraries(L33exe3 L3task3lib4)
target_link_libraries(L33exe3 L3task3lib5)
