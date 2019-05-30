# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (L32exe2 "maid.c")
target_link_libraries(L32exe2 L3task2lib1)
target_link_libraries(L32exe2 L3task2lib2)
target_link_libraries(L32exe2 L3task2lib3)
target_link_libraries(L32exe2 L3task2lib4)
target_link_libraries(L32exe2 L3task2lib5)
