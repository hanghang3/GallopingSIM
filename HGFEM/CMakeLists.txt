project(Solution_main)

add_subdirectory(ElementCalculator)
add_subdirectory(Main)
add_subdirectory(Task)

# 添加exe依赖文件
add_executable(${PROJECT_NAME} Solution_main.cpp)

# 设置主程序h文件路径
target_include_directories(${PROJECT_NAME}
PUBLIC
${HGFEM_MainDir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
Task
)


