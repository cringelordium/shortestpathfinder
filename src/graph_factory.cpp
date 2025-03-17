#include "graph_factory.h"
#include "unweighted_graph.h"
#include <fstream>
#include <stdexcept>

std::unique_ptr<Graph> GraphFactory::CreateGraphFromFile(const std::string& filename, int& startVertex) {
    std::ifstream infile(filename);
    if (!infile) {
        throw std::runtime_error("Error opening file");
    }
    
    int v, e;
    infile >> v >> e;
    auto graph = std::make_unique<UnweightedGraph>(v);
    
    for (int i = 0; i < e; i++) {
        int v1, v2;
        infile >> v1 >> v2;
        graph->AddEdge(v1, v2);
    }
    
    infile >> startVertex;
    return graph;
}