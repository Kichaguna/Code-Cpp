#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, temp = 0, temp2 = 0;
  int c1[3] = {0,0,0};
  int c2[4] = {0,0,0,0};
  int c3[6] = {0,0,0,0,0,0};
  string s;
  cin >> n >> s;
  string a = {"ABC"}, b = {"BABC"}, g = {"CCAABB"};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      temp = j + i;
      temp2 = temp % 3;
      if (s[j] == a[temp2]) {
        c1[i]++;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < n; j++) {
      temp = j + i;
      temp2 = temp % 4;
      if (s[j] == b[temp2]) {
        c2[i]++;
      }
    }
  }
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < n; j++) {
      temp = j + i;
      temp2 = temp % 6;
      if (s[j] == g[temp2]) {
        c3[i]++;
      }
    }
  }
  sort(c1, c1 + 3);
  sort(c2, c2 + 4);
  sort(c3, c3 + 6);
  int h[3] = {c1[2],c2[3],c3[5]};
  sort(h, h + 3);
  cout << h[2] << endl;
  if (h[2] == c1[2]) {
    cout << "Adrian" << endl;
  }
  if (h[2] == c2[3]) {
    cout << "Bruno" << endl;
  }
  if (h[2] == c3[5]) {
    cout << "Goran" << endl;
  }
}
