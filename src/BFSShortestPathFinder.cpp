#include "BFSShortestPathFinder.h"
#include <iostream>
#include <algorithm>

BFSShortestPathFinder::BFSShortestPathFinder(const Graph& g) : graph(g), dist(g.GetVertexCount(), std::nullopt) {}

void BFSShortestPathFinder::FindShortestPaths(int start) {
    std::queue<int> q;
    q.push(start);
    dist[start] = 0;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        for (const auto& [u, _] : graph.GetNeighbors(v)) {
            if (!dist[u].has_value()) {
                dist[u] = dist[v].value() + 1;
                q.push(u);
            }
        }
    }
}

void BFSShortestPathFinder::PrintDistances() const {

    for (size_t i = 0; i < dist.size(); i++) {
        std::cout << "Distance to vertex " << i << ": ";
        std::cout << dist[i].value() << std::endl;
    }
}