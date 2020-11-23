set(BINARY ${CMAKE_PROJECT_NAME}_tests) #alias 

set(SOURCES
    main.cpp
    mathTest.cpp
)

set(LIBRARIES
    gtest
    ${CMAKE_PROJECT_NAME}_lib   # linking the library defined in src folder
)

add_executable(${BINARY} ${SOURCES})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC ${LIBRARIES})

# finer control since only tests need to has visibility of math.hpp
target_include_directories(${BINARY} PRIVATE ../src)
