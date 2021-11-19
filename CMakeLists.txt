# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
PROJECT(simple_parser)
SET (CMAKE_CXX_STANDARD 14)
include_directories("/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/include/antlr4-runtime")
include_directories(${PROJECT_SOURCE_DIR}/src)
link_directories("/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/lib")
find_package(nlohmann_json REQUIRED)
file(GLOB ALL_SRCS
  "${PROJECT_SOURCE_DIR}/src/*.cpp"
  )
add_executable(simple_parser ${ALL_SRCS})
target_link_libraries(simple_parser antlr4-runtime nlohmann_json::nlohmann_json)
