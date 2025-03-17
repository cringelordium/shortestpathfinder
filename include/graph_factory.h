#ifndef GRAPHFACTORY_H
#define GRAPHFACTORY_H

#include "graph.h"
#include <memory>
#include <string>

class GraphFactory {
public:
    static std::unique_ptr<Graph> CreateGraphFromFile(const std::string& filename, int& startVertex);
};

#endif