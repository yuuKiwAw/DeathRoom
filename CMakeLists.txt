cmake_minimum_required(VERSION 3.0.0)
project(DeathRoom VERSION 0.1.0)
set(CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(E:/source/cppLib/SDL2-2.0.22/x86_64-w64-mingw32/include)

aux_source_directory(./src SrcFiles)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
add_executable(main ${SrcFiles})

target_link_libraries(main E:/source/cppLib/SDL2-2.0.22/x86_64-w64-mingw32/bin/SDL2.dll)
