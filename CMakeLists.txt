cmake_minimum_required(VERSION 3.28.3)

# 项目名称
project(GallopingSimulation
   VERSION 0.0.1
   DESCRIPTION "A finite element software program for simulating the galloping of power transmission lines "
   HOMEPAGE_URL "https://github.com/hanghang3/GallopingSIM"
   LANGUAGES CXX
)

# 设置全局属性
set(CMAKE_CXX_STANDARD 17)

# 变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(HGFEM_MainDir ${CMAKE_SOURCE_DIR}/HGFEM/Main)
set(ElementCalculator_Dir ${CMAKE_SOURCE_DIR}/HGFEM/ElementCalculator)

# 添加子目录
add_subdirectory(HGFEM)

