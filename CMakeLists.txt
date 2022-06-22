cmake_minimum_required(VERSION 3.22)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

add_executable(LeetCode
        DataStructure-Primary/88merge.cpp)

# 添加以下内容 两层目录
file (GLOB files *.cpp */*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)/(.+)\\..*" "\\1-\\2" exe ${file})
    add_executable (${exe} ${file} )
endforeach ()

## 一层目录
#file (GLOB files *.cpp)
#
## 两层目录
#file (GLOB files *.cpp */*.cpp)
#
## 三层目录
#file (GLOB files *.cpp */*.cpp */*/*.cpp)