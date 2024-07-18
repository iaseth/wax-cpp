cmake_minimum_required(VERSION 3.0)
project(waxplus)

add_library(waxcpplib SHARED)
file(GLOB_RECURSE sources lib/*.cpp include/*.hpp)
target_sources(waxcpplib PUBLIC ${sources})
set_target_properties(waxcpplib PROPERTIES LINKER_LANGUAGE CXX)

target_compile_options(waxcpplib PUBLIC -std=c++1y -Wall -Wfloat-conversion)
target_include_directories(waxcpplib PUBLIC include)


add_executable(waxplus src/waxplus.cpp)
add_dependencies(waxplus waxcpplib)

target_link_libraries(waxplus LINK_PUBLIC waxcpplib)
target_compile_options(waxplus PUBLIC -std=c++1y -Wall)
target_include_directories(waxplus PUBLIC include)
