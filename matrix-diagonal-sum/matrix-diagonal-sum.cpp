 
#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    for (int i = 0; i != mat.size(); ++i) {
        sum += mat[i][i];
    }

    for (int i = 0, j = mat[0].size() - 1; i != mat.size(); ++i, j--) {
        if (i != j) {
            sum += mat[i][j];
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