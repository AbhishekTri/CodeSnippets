void bfs(int src, unordered_map<int, bool>& visited) {
    queue<int> q;

    q.push(src);
    visited[src] = true;

    while(!q.empty()) {
      int frontNode= q.front();
      q.pop();
      cout << frontNode << ", ";

      //insert neighbours
      for(auto neighbour: adjList[frontNode]) {
        if(!visited[neighbour] ) {
          q.push(neighbour);
          visited[neighbour] = true;
        }
      }
    }
  }
