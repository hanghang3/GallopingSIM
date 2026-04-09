project(Solution_main)

# 先构建 ElementCalculator，因为 Task 依赖它
add_subdirectory(ElementCalculator)
add_subdirectory(Task)
add_subdirectory(Main)

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


