set(BINARY ${CMAKE_PROJECT_NAME}_tests) #alias 

set(SOURCES
    main.cpp
    mathTest.cpp
)

add_executable(${BINARY} ${SOURCES})
add_test(NAME ${BINARY} COMMAND ${BINARY})
# linking the library from src
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

# finer control since only tests need to has visibility of math.hpp
target_include_directories(${BINARY} PRIVATE ../src)
