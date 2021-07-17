#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>> & mat, int i,int j, int no){
    for(int k=0;k<9;k++){
        if(mat[i][k]==no || mat[k][j]==no) return false;
    }

    int sx=(i/3) * 3;
    int sy=(j/3) * 3;

    for(int x=sx; x< sx+3;x++){
        for(int y=sy; y<sy+3;y++){
            if(mat[x][y]==no) return false;
        }
    }

    return true;
}

bool sudokuSolve(vector<vector<int>> &mat, int i, int j)
{
    if (i == 9)
     return true;

    if (j == 9)
        return sudokuSolve(mat,i+1,0);

    if(mat[i][j]!=0)
        return sudokuSolve(mat, i , j+1);

    for(int no=1;no<=9;no++){
        if(isSafe(mat,i,j,no)){
            mat[i][j]=no;

            if (sudokuSolve(mat, i, j + 1)){
                return true;
            }
        }
    }

    mat[i][j] = 0;
    return false;   
}

vector<vector<int>> solveSudoku(vector<vector<int>> input)
{
    sudokuSolve(input, 0, 0);
    return input;
}

int main()
{

    int n = 9;
    vector<vector<int>> mat =
        {{5, 3, 0, 0, 7, 0, 0, 0, 0},
         {6, 0, 0, 1, 9, 5, 0, 0, 0},
         {0, 9, 8, 0, 0, 0, 0, 6, 0},
         {8, 0, 0, 0, 6, 0, 0, 0, 3},
         {4, 0, 0, 8, 0, 3, 0, 0, 1},
         {7, 0, 0, 0, 2, 0, 0, 0, 6},
         {0, 6, 0, 0, 0, 0, 2, 8, 0},
         {0, 0, 0, 4, 1, 9, 0, 0, 5},
         {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    vector<vector<int>> res = solveSudoku(mat);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}
