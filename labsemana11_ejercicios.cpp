#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Node{
    int data;
    list<Node> concecctions;
};
void addnode(Node node, int data){

}
// Function to add an edge between vertices u and v
void addEdge(vector<vector<int>> &graph, int u, int v)
{
    graph[u][v] = 1;
    graph[v][u] = 1;
}

// Function to print the adjacency matrix
void printGraph(const vector<vector<int>> &graph)
{
    cout << "Adjacency Matrix:\n";
    for (const auto &row : graph)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
}
void ConnectGraph(const vector<vector<int>> &graph)
{
    
    cout << "Adjacency Matrix:\n";
    for (const auto &row : graph)
    {
        int fila = 0;
        int columna = 0;
        for (int val : row)
        {
           if (val == 1){
            cout << "valor" << columna << "conectada con" <<  endl;
           }
        }
        fila++;
        cout << '\n';
    }
}
int main()
{
    int V; // Number of vertices
    cout << "Enter the number of vertices: ";
    cin >> V;
    // Create an empty adjacency matrix
    vector<vector<int>> graph(V, vector<int>(V, 0));
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,3,1);
    addEdge(graph,4,1);
    addEdge(graph,5,1);
    addEdge(graph,3,2);
    addEdge(graph,5,2);
    addEdge(graph,6,2);
    addEdge(graph,4,3);
    addEdge(graph,5,4);
    addEdge(graph,7,4);
    addEdge(graph,6,5);
    addEdge(graph,7,5);
    addEdge(graph,7,6);

    
    
    // Print the adjacency matrix
    printGraph(graph);

    ConnectGraph(graph);
    return 0;
}
