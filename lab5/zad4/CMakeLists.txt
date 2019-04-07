project(zad4)

set(HEDEAR_FILES rodzzina.h)
set(SOURCE_FILES rodzzina.cpp)

add_library(librodzzina STATIC ${SOURCE_FILES})
target_include_directories(librodzzina PUBLIC .)

add_executable(rodzzina ${SOURCE_FILES} main.cpp)

target_link_libraries(rodzzina librodzzina)
