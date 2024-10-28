#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>

class Graph {
    int V; // Number of vertices
    std::list<int> *adj; // Adjacency list

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
    void BFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v) {
    std::vector<bool> visited(V, false);
    
    std::stack<int> stack;
    
    stack.push(v);

    while (!stack.empty()) {
    
        v = stack.top();
        stack.pop();

        if (!visited[v]) {
            std::cout << v << " ";
            visited[v] = true;
        }

        for (auto i = adj[v].rbegin(); i != adj[v].rend(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
    std::cout << std::endl;
}

void Graph::BFS(int v) {

    std::vector<bool> visited(V, false);

    std::queue<int> queue;

    visited[v] = true;
    queue.push(v);

    while (!queue.empty()) {
    
        v = queue.front();
        std::cout << v << " ";
        queue.pop();

        for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push(*i);
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    Graph g(4); // Assume we still have 4 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 2);

    std::cout << "Depth First Search starting from vertex 0:\n";
    g.DFS(0);

    std::cout << "Breadth First Search starting from vertex 0:\n";
    g.BFS(0);

    return 0;
}
