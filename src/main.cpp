#include "graph_factory.h"
#include "BFSShortestPathFinder.h"
#include <iostream>

int main() {
    try {
        int start;
        auto graph = GraphFactory::CreateGraphFromFile("graph.txt", start);
        
        std::unique_ptr<IShortestPathFinder> spf = std::make_unique<BFSShortestPathFinder>(*graph);
        spf->FindShortestPaths(start);
        spf->PrintDistances();
        
    } catch (const std::exception& e) {
        std::cerr << "Error" << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}