
set(SOURCES
    math.hpp
    math.cpp
    main.cpp
)

add_executable(${CMAKE_PROJECT_NAME}_run ${SOURCES})
add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})  # make math into a library

