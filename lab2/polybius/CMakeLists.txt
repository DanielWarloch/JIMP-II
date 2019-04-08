project(polybius)

set(HEDEAR_FILES polybius.h)
set(SOURCE_FILES polybius.cpp)

add_library(libpolybius STATIC ${SOURCE_FILES})
target_include_directories(libpolybius PUBLIC .)

add_executable(polybius ${SOURCE_FILES} main.cpp)

target_link_libraries(polybius libpolybius)