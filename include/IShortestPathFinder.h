#ifndef ISHORTESTPATHFINDER_H
#define ISHORTESTPATHFINDER_H

class IShortestPathFinder {
public:
    virtual ~IShortestPathFinder() = default;
    virtual void FindShortestPaths(int start) = 0;
    virtual void PrintDistances() const = 0;
};

#endif