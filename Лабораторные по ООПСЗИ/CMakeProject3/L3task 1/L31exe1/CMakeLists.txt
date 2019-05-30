# CMakeList.txt: проект CMake для CMakeProject3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

add_executable (L31exe1 "maid.c")
target_link_libraries(L31exe1 L3task1lib1)
target_link_libraries(L31exe1 L3task1lib2)
target_link_libraries(L31exe1 L3task1lib3)
target_link_libraries(L31exe1 L3task1lib4)
target_link_libraries(L31exe1 L3task1lib5)
