#include <iostream>
#include <vector>

using namespace std;

class Grafo
{
private:
    int numVertices;

public:
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
    bool ConnectGraph(const vector<vector<int>> &graph, int u, int v)
    {
        if (graph[u][v] == 1 && graph[v][u] == 1)
        {
            return true;
        }
        return false;
    }

};
int main()
{
    Grafo grafo;
    // Create an empty adjacency matrix
    vector<vector<int>> graph(8, vector<int>(8, 0));

    // ejercicio 1
    grafo.addEdge(graph, 0, 1);
    grafo.addEdge(graph, 0, 2);
    grafo.addEdge(graph, 3, 1);
    grafo.addEdge(graph, 4, 1);
    grafo.addEdge(graph, 5, 1);
    grafo.addEdge(graph, 3, 2);
    grafo.addEdge(graph, 5, 2);
    grafo.addEdge(graph, 6, 2);
    grafo.addEdge(graph, 4, 3);
    grafo.addEdge(graph, 5, 4);
    grafo.addEdge(graph, 7, 4);
    grafo.addEdge(graph, 6, 5);
    grafo.addEdge(graph, 7, 5);
    grafo.addEdge(graph, 7, 6);
    // Print the adjacency matrix
    // ejercicio 2
    grafo.printGraph(graph);
    // ejercicio 3
    if (grafo.ConnectGraph(graph, 1, 2))
    {
        cout << "Los vertices 1 y 2 son adyacentes." << endl;
    }
    else
    {
        cout << "Los vertices 1 y 2 no son adyacentes." << endl;
    }
    // ejercicio 5

    graph[0][7] = 1;
    grafo.printGraph(graph);
    cout << "vertice 8 no tiene conexion"<< endl;
    //ejercicio 6
    graph[6][1] = 1;
    grafo.printGraph(graph);
    cout << "punto |6|1| forma un ciclo"<< endl;
    //ejericio 7
    graph[0][2] = 0;
    graph[2][3] = 0;
    graph[4][3] = 0;
    grafo.printGraph(graph);
    cout << "puntos |0|2|, |2|3|, |4|3| eliminados para formar 2 subgrafos"<< endl;

    return 0;
}
