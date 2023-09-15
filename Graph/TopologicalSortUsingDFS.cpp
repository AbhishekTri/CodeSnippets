void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& ans) {

  visited[src] = true;

  for(auto neighbour: adjList[src]) {
   if(!visited[neighbour] ) {
    topoSortDfs(neighbour, visited, ans);
   }
  }

  //while returning, store the node in the stack
  ans.push(src);
 }
