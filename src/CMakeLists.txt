file(GLOB source_files ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(EPIC ${source_files})

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc")
# set_target_properties(Fractal PROPERTIES DEBUG_POSTFIX "_Debug")


