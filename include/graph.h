#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <utility>

class Graph {
protected:
    int vertices;

public:
    explicit Graph(int v);
    virtual ~Graph() = default;

    virtual void AddEdge(int v1, int v2, int weight = 1) = 0;
    virtual const std::vector<std::pair<int, int>>& GetNeighbors(int v) const = 0;
    int GetVertexCount() const;
};

#endif