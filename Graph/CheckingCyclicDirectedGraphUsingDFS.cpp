bool checkCyclicDirectedGraphUsingDfs(int src, unordered_map<int,bool>& visited,
unordered_map<int,bool> dfsVisited) {

  visited[src] = true;
  dfsVisited[src] = true;

  for(auto nbr: adjList[src]) {
   if(!visited[nbr]) {
    bool aageKaAnswer = checkCyclicDirectedGraphUsingDfs(nbr, visited, dfsVisited);
    if(aageKaAnswer == true)
     return true;
   }
   if(visited[nbr] == true && dfsVisited[nbr] == true) {
    return true;
   }
  }
  //yaha hi galti hoti h 
  dfsVisited[src] = false;
  return false;
 }


};
