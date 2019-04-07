project(reversestring)

set(HEDEAR_FILES reversestring.h)
set(SOURCE_FILES reversestring.cpp)

add_library(libreversestring STATIC ${SOURCE_FILES})
target_include_directories(libreversestring PUBLIC .)

add_executable(reversestring ${SOURCE_FILES} main.cpp)

target_link_libraries(reversestring libreversestring)
