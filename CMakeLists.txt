project(src)

cmake_minimum_required(VERSION 3.8)

if (UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()

list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_SOURCE_DIR}/cmake")

find_package(USD REQUIRED)

set(CMAKE_CXX_STANDARD 11)

if (LINUX)
    set(DSO_EXT "so")
elseif (APPLE)
    set(DSO_EXT "dylib")
else ()
    set(DSO_EXT "dll")
endif ()

add_compile_options(-Wall -DBUILD_OPTLEVEL_OPT -DBUILD_COMPONENT_SRC_PREFIX="")
option(ENABLE_RESOLVER_BUILD "Enabling building the OpenPype asset resolver." On)


if (ENABLE_RESOLVER_BUILD)
    add_subdirectory(src)
endif ()

install(
    FILES plugInfo.json
    DESTINATION .)