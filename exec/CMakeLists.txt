set(NAME exec)

add_executable(${NAME})

target_link_libraries(${NAME}
PRIVATE
    Boost::boost 
    Boost::json
)

target_sources(${NAME}
PRIVATE
    src/main.cpp
    src/file_io.cpp
    src/ConfigParser.cpp
    src/formulas.cpp

    include/ConfigParser.hpp
    include/file_io.hpp
    include/formulas.hpp
)

target_include_directories(${NAME}
PRIVATE
    include/
)

add_custom_target(${NAME}.run
    COMMAND ${CMAKE_EXECUTE_PROCESS_COMMAND_ECHO}
    ${NAME}
    DEPENDS ${NAME}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    USES_TERMINAL
)