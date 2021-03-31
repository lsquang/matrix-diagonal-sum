 
#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    for (int row = 0; row != mat.size(); ++row) {
        sum += mat[row][row];
    }

    for (int row = 0,  col = mat[0].size() - 1; row != mat.size(); ++row, col--) {
        if (row != col) {
            sum += mat[row][col];
        }
    }
    return sum;
}
int main()
{
    vector<vector<int>> mat = 
    { {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9} };

    cout << diagonalSum(mat) << endl;

} 