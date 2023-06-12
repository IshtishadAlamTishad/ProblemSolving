#include<bits/stdc++.h>
using namespace std;

struct Graph {
    int numVertices;
    vector<vector<int>> adjacencyMatrix;
};

// Check if a vertex can be added to the mapping
bool isFeasible(const Graph& graph1, const Graph& graph2, int v1, int v2, vector<int>& mapping, vector<bool>& isMapped) {
    // Check adjacency
    for (int i = 0; i < graph1.numVertices; i++) {
        if (graph1.adjacencyMatrix[v1][i] && (!graph2.adjacencyMatrix[v2][mapping[i]]))
            return false;
    }

    // Check reverse adjacency
    for (int i = 0; i < graph2.numVertices; i++) {
        if (graph2.adjacencyMatrix[v2][i] && (!graph1.adjacencyMatrix[v1][mapping[i]]))
            return false;
    }
    // Check if vertices are already mapped
    if (isMapped[v2])
        return false;

    return true;
}

// Recursive function to find an isomorphism mapping
bool vf2(const Graph& graph1, const Graph& graph2, vector<int>& mapping, vector<bool>& isMapped) {
    int numVertices = graph1.numVertices;

    // Base case: All vertices are mapped
    if (find(isMapped.begin(), isMapped.end(), false) == isMapped.end())
        return true;

    // Find first unmapped vertex
    int v1 = find(isMapped.begin(), isMapped.end(), false) - isMapped.begin();

    for (int v2 = 0; v2 < numVertices; v2++) {
        if (isFeasible(graph1, graph2, v1, v2, mapping, isMapped)) {
            mapping[v1] = v2;
            isMapped[v2] = true;

            if (vf2(graph1, graph2, mapping, isMapped))
                return true;

            mapping[v1] = -1;
            isMapped[v2] = false;
        }
    }

    return false;
}

// Function to check graph isomorphism using VF2 algorithm
bool iso(const Graph& graph1, const Graph& graph2) {
    int numVertices = graph1.numVertices;

    // Initialize mapping and isMapped arrays
    vector<int> mapping(numVertices, -1);
    vector<bool> isMapped(numVertices, false);

    // Start with vertex 0 as the first mapping
    mapping[0] = 0;
    isMapped[0] = true;

    // Call VF2 algorithm recursively
    return vf2(graph1, graph2, mapping, isMapped);
}

int32_t main() {

    Graph graph1 = {5, {{0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 0},
                       {0, 1, 0, 0, 1},
                       {0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 0}}};

    Graph graph2 = {5, {{0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 0},
                       {0, 1, 0, 0, 1},
                       {0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 0}}};

    cout << ((iso(graph1, graph2)) ? "YES" : "NO") << '\n'; 
    
}
