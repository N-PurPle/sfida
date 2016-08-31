#============================================================
#     CMake build script for sfida.
#============================================================

cmake_minimum_required(VERSION 2.8)

project(sfida_test)

include_directories(
    ${SFIDA_ROOT}/include
    ${SFIDA_ROOT}/dependencies/googletest/googletest/include
    ${SFIDA_ROOT}/dependencies/glm
)

function(add_sfida_test name)
    add_executable(${name} "${name}.cpp")
    target_link_libraries(${name} sfida gtest gtest_main)
    add_test(
        ${name}
        ${name}
    )
endfunction()

add_sfida_test(func_test)