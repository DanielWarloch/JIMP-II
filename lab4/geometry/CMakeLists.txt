project(geometry)

set(HEDEAR_FILES geometry.h)
set(SOURCE_FILES geometry.cpp)

add_library(libgeometry STATIC ${SOURCE_FILES})
target_include_directories(libgeometry PUBLIC .)

add_executable(geometry ${SOURCE_FILES} main.cpp)

target_link_libraries(geometry libgeometry)
