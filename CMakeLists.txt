cmake_minimum_required(VERSION 3.14)
project(unittest VERSION 1.0 LANGUAGES CXX)

# 設定 C++ 標準
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 設定編譯選項，包含測試覆蓋率選項
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage")

# 設定原始碼路徑
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)

# 建立 sphere 函示庫
add_library(sphere STATIC ${SRC_DIR}/sphere.cpp)

# 加入 include 資料夾給 sphere.h
target_include_directories(sphere PUBLIC ${SRC_DIR})

# 建立可執行檔 main
add_executable(main ${SRC_DIR}/main.cpp)

# 將可執行檔和函示庫做連結
target_link_libraries(main PUBLIC sphere)

# 使用 FetchContent 模組下載和引入 Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# 建立一個測試用的可執行檔 test_foo
add_executable(sphere_test ${TEST_DIR}/test.cpp)
# 連結必要函示庫給 test
target_link_libraries(sphere_test PRIVATE sphere gtest gtest_main)

# 開啟 CMake 測試
enable_testing()

# 把 test 加進命名 my_project_test 的測試
add_test(
    NAME my_project_test
    COMMAND sphere_test
)

# 設定測試輸出路徑
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test_bin)