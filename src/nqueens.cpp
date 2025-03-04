#include <bits/stdc++.h>

using namespace std;

float N;
int qIndex[28];

bool checkRow(int nRow){
    for (int row = 1; row < nRow; row++){
        if (qIndex[row] == qIndex[nRow] || abs(nRow - row) == abs(qIndex[nRow] - qIndex[row])){
            return false;
        }
    }
    return true;
}

void printChessBoard(){
    for (int row = 1; row <= N; row++){
        for (int col = 1; col <= N; col++){
            if (col == qIndex[row]){
                cout << 1 << " ";
            } else cout << 0 << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void backtrack(int row){
    for (int col = 1; col <= N; col++){
        qIndex[row] = col;
        if (checkRow(row)){
            if (row < N) backtrack(row + 1); else printChessBoard();
        }
    }
}

int main(){
    cin >> N;
    if ((int)N != N)
        cout << "Input error!";
    else if (N <= 3 && N != 1)
        cout << "No solution!";
    else
        backtrack(1);
    return 0;
}
