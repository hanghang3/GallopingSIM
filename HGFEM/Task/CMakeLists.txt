project(Task)

add_library(${PROJECT_NAME}
SHARED
Solver.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${ElementCalculator_Dir}
)

target_link_directories(${PROJECT_NAME}
PUBLIC
CableElement.cpp
)