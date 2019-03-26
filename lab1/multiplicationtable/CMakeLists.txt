project(multiplicationtable)

set(HEDEAR_FILES multiplicationtable.h)
set(SOURCE_FILES multiplicationtable.cpp)

add_library(libmultiplicationtable STATIC ${SOURCE_FILES})
target_include_directories(libmultiplicationtable PUBLIC .)

add_executable(multiplicationtable ${SOURCE_FILES} main.cpp)

target_link_libraries(multiplicationtable libmultiplicationtable)
