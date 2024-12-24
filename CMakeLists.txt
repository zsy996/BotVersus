#### 最低cmake版本要求
cmake_minimum_required(VERSION 3.10)

#### 项目名称
project(Botzone)

#### 设置C++标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#### 设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" -g -O1 -Wall -lwfrest -lpthread -llog4cpp)

#### 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

#### 设置编译完成后的输出目录,将src目录下的源文件存储到SRC_LIST中
aux_source_directory(src SRC_LIST)

#### 头文件目录
include_directories(include)

#### 创建项目，可执行文件
add_executable(Botzone ${SRC_LIST})






