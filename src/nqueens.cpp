#include <bits/stdc++.h>

using namespace std;

int N = 1;
vector <int> queenIndex;
vector<vector<int>> possibleSolution;
vector <bool> mainDiagonal;
vector <bool> primaryDiagonal;
vector <bool> column;

bool check(int row, int col) {
    if (column[col] == false || mainDiagonal[row - col + N - 1] == false || primaryDiagonal[row + col - 2] ==  false)
        return false;
    return true;
}

void NQueen(int row) {
    for (int col = 1; col <= N; col++){
        if (check(row, col)) {
            queenIndex[row] = col;
            column[col] = mainDiagonal[row - col + N - 1] = primaryDiagonal[row + col - 2] = false;
            if (row == N)
                possibleSolution.push_back(queenIndex);
            else
                NQueen(row + 1);
            column[col] = mainDiagonal[row - col + N - 1] = primaryDiagonal[row + col - 2] = true;
        }
    }
}

int main() {
    cout << "N = ";
    cin >> N;

    queenIndex.resize(N + 1);
    column.resize(N + 1, true);
    mainDiagonal.resize(2 * N - 1, true);
    primaryDiagonal.resize(2 * N - 1, true);
    
    NQueen(1);
    cout << possibleSolution.size() << endl << endl;
    for (int k = 0; k < possibleSolution.size(); k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cout << (j == possibleSolution[k][i]) << " ";
                if (j % N == 0)
                    cout << endl;
            }
        }
        cout << endl;
    }
}
