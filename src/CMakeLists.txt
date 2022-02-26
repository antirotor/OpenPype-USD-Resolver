
cmake_minimum_required(VERSION "3.7.1")

project("OpenPypeResolver")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_GENERATOR_PLATFORM x64)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/install")

set(USD_ROOT "" CACHE STRING "Root location USD installation")
set(PYTHON_ROOT "" CACHE STRING "Root location of Python installation")

add_library(OpenPypeResolver SHARED openPypeResolver.cpp)

target_include_directories(OpenPypeResolver PRIVATE .)
target_link_directories(OpenPypeResolver PUBLIC
    ${PYTHON_ROOT}/libs
    ${USD_ROOT}/lib
    ${USD_ROOT}/bin
    )
target_link_libraries(OpenPypeResolver
	usd_arch.lib
    usd_ar.lib
    usd_tf.lib
)
include_directories(
    ${USD_ROOT}/include
    ${USD_ROOT}/include/boost-1_70
    ${PYTHON_ROOT}/include
)

install(TARGETS OpenPypeResolver DESTINATION lib)
install(FILES openPypeResolver.h DESTINATION include)
install(FILES plugInfo.json DESTINATION plugin/ar)