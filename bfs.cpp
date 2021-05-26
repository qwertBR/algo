  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int i = 0; i < n; ++i) {
      if (g[v][i] and !used[i]) {
        q.push(i);
        used[i] = true;
        d[i] = d[v] + 1;
        p[i] = v;
        if (v == b) break;
      }
    }
  }
  if (d[b] != 0) {
    cout << d[b] << endl;
    vector<int> path;
    for (int v = b; v != -1; v = p[v]) path.push_back(v);
    reverse(path.begin(), path.end());
    for (auto el : path) cout << el + 1 << " ";
  } else if (a == b) {
    cout << "0" << endl;
  } else cout << "-1" << endl;
