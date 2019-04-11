project(complex)

set(HEDEAR_FILES Complex.h)
set(SOURCE_FILES Complex.cpp)

add_library(libcomplex STATIC ${SOURCE_FILES})
target_include_directories(libcomplex PUBLIC .)

add_executable(complex ${SOURCE_FILES} main.cpp)

target_link_libraries(complex libcomplex)