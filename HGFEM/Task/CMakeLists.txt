project(Task)

add_library(${PROJECT_NAME}
STATIC
Solver.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${CMAKE_SOURCE_DIR}/HGFEM
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
ElementCalculator
)