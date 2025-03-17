cmake_minimum_required(VERSION 3.10)
project(ShortestPathFinder)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(ShortestPathFinder
    src/main.cpp
    src/graph.cpp
    src/unweighted_graph.cpp
    src/BFSShortestPathFinder.cpp
    src/graph_factory.cpp
)

target_include_directories(ShortestPathFinder PRIVATE include)