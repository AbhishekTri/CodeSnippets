bool checkCyclicUsingBfs(int src, unordered_map<int,bool>& visited) {
  queue<int> q;
  unordered_map<int,int> parent;

  q.push(src);
  visited[src] = true;
  parent[src] = -1;

  while(!q.empty()) {
   int frontNode = q.front();
   q.pop();

   for(auto nbr: adjList[frontNode]) {
    if(!visited[nbr]) {
     q.push(nbr);
     visited[nbr] = true;
     parent[nbr]=frontNode;
    }
    if(visited[nbr] && nbr != parent[frontNode]) {
      //cycle present
      return true;
    }
   }
  }
  return false;
 }
