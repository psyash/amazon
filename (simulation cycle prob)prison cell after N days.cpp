vector<int> prisonAfterNDay(vector<int> &res, int n){
  vector<int> tmp(8);
  vector<vector<int>> seen;

  while(n--){
    for(int i=1;i<7;i++){
      tmp[i] = res[i-1] = res[i+1];

    }
    if(seen.size() and seen.front()==tmp) return seen[n%seen.size()];
    else seen.push_back(tmp);
    res = tmp;
  }
  return res;
}