
project(academia)

set(HEDEAR_FILES Student.h StudentRepository.h StudentYear.h)
set(SOURCE_FILES Student.cpp StudentRepository.cpp StudentYear.cpp)

add_library(libacademia STATIC ${SOURCE_FILES})
target_include_directories(libacademia PUBLIC .)

add_executable(academia ${SOURCE_FILES} main.cpp)

target_link_libraries(academia libacademia)