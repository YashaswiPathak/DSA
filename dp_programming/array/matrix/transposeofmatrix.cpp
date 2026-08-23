
 #include <iostream>
using namespace std;
 int main() {
     int m, n;
     
    cout << "Enter no. of rows: ";
     cin >> m;
     cout << "Enter no. of columns: ";
   cin >> n;

   int matrix[m][n], transpose[n][m];

 cout << "Enter elements of matrix:\n";
     for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++)          
          {cin >> matrix[i][j];

        }     }
     for (int i = 0; i < m; i++) {
         for (int j = 0; j < n; j++) {
             transpose[j][i] = matrix[i][j];
         }     }
     cout << "Transpose of matrix:\n";
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             cout << transpose[i][j] << " "<<endl;
        }        
        } cout << endl;
   return 0;
}


