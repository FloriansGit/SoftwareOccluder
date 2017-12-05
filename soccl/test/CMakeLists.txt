set(
    TESTS 
        "src/main.cpp"
        "src/soccl_test.cpp"
)
add_executable(tests ${TESTS})
target_link_libraries(tests soccl gtest gmock)