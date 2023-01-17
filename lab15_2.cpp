#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double matrix[N][N])
{
    for (int i = 0; i < N; i++) 
	  {
		cout << "Row " << i+1 << ": ";
        for (int j = 0; j < N; j++) 
		{
            cin >> matrix[i][j];
        }
    }
}
void findLocalMax(const double matrix[N][N], bool B[N][N])
{
   for (int i = 0; i < N; i++) 
   {
        for (int j = 0; j < N; j++) {
            if (i > 0 && i < N - 1 && j > 0 && j < N - 1) 
            {
                if (matrix[i][j] >= matrix[i - 1][j] && matrix[i][j] >= matrix[i + 1][j] && matrix[i][j] >= matrix[i][j - 1] && matrix[i][j] >= matrix[i][j + 1]) 
                {
                    B[i][j] = true;
                } 
                else 
                {
                    B[i][j] = false;
                }
            } 
            else 
            {
                B[i][j] = false;
            }
        }
    }
}
void showMatrix(const bool matrix[N][N])
{

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

}
