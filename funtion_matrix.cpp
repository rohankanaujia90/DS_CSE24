#include<bits/stdc++.h>
using namespace std;



// void matrix_sum(){
//     int a [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int b [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int c [3][3] ;
//     for(int  i= 0 ; i <3 ; i++ ){
//         for(int j=0 ; j < 3 ;  j++){
            
//             c[i][j]=a[i][j]+b[i][j];
            
//             cout<<c[i][j]<<" ";
//         }
        
//         cout<< endl;
//     }
// }

// int main(){
//     matrix_sum();
//     return 0 ;
// }

void matrix_multi(int A[][3], int B[][3] ){
    int result [3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Matrix Multiplication Result:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    matrix_multi(A, B);
    return 0;
}