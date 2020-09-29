#include<iostream>
#include<queue>
using namespace std;

void dfs(int **graph, int n, int sv, int *visited) {
	cout << sv << " ";
	visited[sv] = 1;
	for(int i = 0; i < n; i++) {
		if(sv == i) {
			continue;
		}
		if(graph[sv][i] == 1) {
			if(visited[i] != 1) {
				dfs(graph, n, i, visited);
			}
		}
	}
}

void bfs(int **graph, int n, int sv, int *visited) {
	queue<int> pendingVertex;
	pendingVertex.push(sv);
	visited[sv] = 1;
	while(!pendingVertex.empty()) {
		int cur = pendingVertex.front();
		pendingVertex.pop();
		cout << cur << " ";
		for(int i = 0; i < n; i++) {
			if(cur == i) {
				continue;
			}
			if(graph[cur][i] == 1 && visited[i] == 0) {
				pendingVertex.push(i);
				visited[i] = 1;
			}
		}
	}
}

int main() {
	// n = no of vertex
	// e = no of edge
	int n, e;
	cout << "Enter the nof of vertex and edge: ";
	cin >> n >> e;
	int **graph = new int*[n];
	for(int i = 0; i < n; i++) {
		graph[i] = new int[n];
		for(int j = 0; j < n; j++) {
			graph[i][j] = 0;
		}
	}
	for(int i = 0; i < e; i++) {
		int f, s;
		cout << "Enter first and second vertex: ";
		cin >> f >> s;
		graph[f][s] = 1;
		graph[s][f] = 1;
	}

	int *visited = new int[n];
	for(int i = 0; i < n; i++) {
		visited[i] = 0;
	}

	// cout << "DFS: ";
	// dfs(graph, n, 0, visited);
	cout << "BFS: ";
	bfs(graph, n, 0, visited);
	
	cout << endl;
}