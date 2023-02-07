cmake_minimum_required(VERSION 3.21)

# 设置项目名
project(Tutorial)

# 添加.h文件的文件路径
include_directories(./include)
set(INCLUDE ./include)
message(STATUS INCLUDE)

# 设置变量名
# set(SRCLIST ./main.c ./src/table.c ./src/link_list.c ./src/stack_linked.c)
set(SRCLIST main.c src/stack_linked.c)

# 使用变量
add_executable(out ${SRCLIST})
