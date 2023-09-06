void dfs(int src, unordered_map<int, bool>& visited) {
    cout << src << ", ";
    visited[src] = true;

    for(auto neighbour: adjList[src]) {
      if(!visited[neighbour] ) {
        dfs(neighbour, visited);
      }
    }
  }
