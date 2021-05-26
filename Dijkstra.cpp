 d[s] = 0;
  se.insert(make_pair(s, d[s]));
  while (!se.empty()) {
    v = se.begin()->first;
    se.erase(se.begin());
    for (size_t i = 1; i <= n; ++i) {
      if (g[v][i] == -1) continue;
      if (v == i) continue;
      len = g[v][i];
      if (d[v] + len < d[i]) {
        se.erase(make_pair(i, d[i]));
        d[i] = d[v] + len;
        p[i] = v;
        se.insert(make_pair(i, d[i]));
      }
    }
  }
  vector <int> path;
  for (int i = f; i != s; i=p[i]) path.push_back(i);
  reverse(path.begin(), path.end());
  if (d[f] == INF) {
    cout << "-1";
  } else {
    cout << d[f];
  }
