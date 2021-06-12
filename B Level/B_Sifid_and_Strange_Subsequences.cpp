#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//********MACROS********

void solve()
{
  int n;
  cin >> n;
  vector<ll> v;
  for (int i = 0; i < n; i++)
  {
    ll val;
    cin >> val;
    v.push_back(val);
  }

  sort(v.begin(), v.end());
  int answer = 1;
  ll dif = INF;

  for (int i = 0; i < n; i++)
  {
    dif = min(dif, abs(v[i] - v[i - 1]));
    if (dif < v[i])
      break;
    answer++;
  }
  cout << answer - 1 << endl;
  return;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc = 1;
  cin >> tc;
  for (int t = 1; t <= tc; t++)
  {
    // cout << "Case #" << t  << ": ";
    solve();
  }
}