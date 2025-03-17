#ifndef UNWEIGHTEDGRAPH_H
#define UNWEIGHTEDGRAPH_H

#include "graph.h"
#include <vector>

class UnweightedGraph : public Graph {
private:
    std::vector<std::vector<std::pair<int, int>>> adj;

public:
    explicit UnweightedGraph(int v);
    void AddEdge(int v1, int v2, int weight = 1) override;
    const std::vector<std::pair<int, int>>& GetNeighbors(int v) const override;
};

#endif