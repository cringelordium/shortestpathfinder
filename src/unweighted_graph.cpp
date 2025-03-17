#include "unweighted_graph.h"

UnweightedGraph::UnweightedGraph(int v) : Graph(v), adj(v) {}

void UnweightedGraph::AddEdge(int v1, int v2, int weight) {
    adj[v1].emplace_back(v2, weight);
    adj[v2].emplace_back(v1, weight);
}

const std::vector<std::pair<int, int>>& UnweightedGraph::GetNeighbors(int v) const {
    return adj[v];
}