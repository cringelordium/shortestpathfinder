#ifndef BFSSHORTESTPATHFINDER_H
#define BFSSHORTESTPATHFINDER_H

#include "IShortestPathFinder.h"
#include "graph.h"
#include <vector>
#include <optional>
#include <queue>

class BFSShortestPathFinder : public IShortestPathFinder {
private:
    const Graph& graph;
    std::vector<std::optional<int>> dist;

public:
    explicit BFSShortestPathFinder(const Graph& g);
    void FindShortestPaths(int start) override;
    void PrintDistances() const override;
};

#endif