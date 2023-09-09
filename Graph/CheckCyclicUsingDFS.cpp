bool checkCyclicUsingDfs(int src, unordered_map<int,bool>& visited, int parent) {
  visited[src] = true;

  for(auto nbr: adjList[src]) {
   if(!visited[nbr]) {
    bool checkAageKaAns = checkCyclicUsingDfs(nbr, visited, src);
    if(checkAageKaAns == true)
     return true;
   }
   if(visited[nbr] && nbr != parent) {
    //cycle present
    return true;
   }
  }
  return false;
 }
