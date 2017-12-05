    set(
        SOURCES 
            "src/soccl.cpp"
            "include/soccl.hpp"
    )

    add_library(soccl ${SOURCES})
    target_include_directories(soccl PUBLIC "include")
    target_compile_features(soccl PUBLIC "cxx_std_14")
    target_link_libraries(soccl CImg)

    install(
        TARGETS soccl 
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
    )

    add_subdirectory("test")