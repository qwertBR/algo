void dfs(size_t now, vector<vector<size_t>> &g, vector<bool> &v, set<size_t> &s) {
  v[now] = true;
  s.insert(now);
  for (size_t neig : g[now]) {
    if (!v[neig])
      dfs(neig, g, v, s);
  }
