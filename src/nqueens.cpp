#include <bits/stdc++.h>

using namespace std;

int N = 1;
vector <int> x;
vector<vector<int>> a;
vector <bool> c1;
vector <bool> c2;
vector <bool> c;


//ham de quy
bool check(int i, int j) {
    if (c[j] == false || c1[i - j + N - 1] == false || c2[i + j - 2] ==  false)
        return false;
    return true;
}

void NQueen(int i) {
    for (int j = 1; j <= N; j++)
        if (check(i, j)) {
            x[i] = j;
            c[j] = c1[i - j + N - 1] = c2[i + j - 2] = false;
            if (i == N)
                a.push_back(x);
            else
                NQueen(i + 1);
            c[j] = c1[i - j + N - 1] = c2[i + j - 2] = true;
        }
}
//


int main() {
    cout << "N = ";
    cin >> N;
    x.resize(N + 1);
    c.resize(N + 1, true);
    c1.resize(2 * N - 1, true);
    c2.resize(2 * N - 1, true);
    NQueen(1);
    cout << a.size() << endl;
}
