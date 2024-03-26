#include <iostream>
using namespace std;

// //ques1
// class swapper{
//     public:
//     //member function inside class
//     void Swap( int &a, int &b){
        
//         a = a + b;
//         b = a - b;
//         a = a - b;
        
//      }

// };

// //ques 2

// class swapper{
    
//     public:
//     void Swap( int &a, int &b);

// };
// //member function outside class
// void swapper::Swap( int &a, int &b){
        
//         a = a + b;
//         b = a - b;
//         a = a - b;
        
//      }

//OR

class b;

class a{
    int x;//data member
    public:

    void setdata(int i){
        x = i;
    }
    friend void swapper(a &A,b &B);//we pass the actual class

};

class b{
    int y;//data member
    public:
    void setdata(int i){
        y = i;
    }
    friend void swapper(a &A,b &B);//we pass the actual class

};


void swapper(a& A, b& B ){
        
        A.x = A.x + B.y;
    B.y = A.x - B.y;
    A.x = A.x - B.y;
}




// class b;

// class a{
//     int x;//data member
//     public:

//     void setdata(int i){
//         x = i;
//     }
//     friend void comparison(a,b);//we pass the actual class

// };

// class b{
//     int y;//data member
//     public:
//     void setdata(int i){
//         y = i;
//     }
//     friend void comparison(a,b);//we pass the actual class

// };



// void comparison(a A,b B){//since class is a datatype us datatype 
//                          //ke 2 objects hai A and B
//     if(A.x<=B.y) 
// cout <<B.y<<"\nis greator"<< endl; 
//  else 
// cout <<A.x<<"\nis greator" << endl; 
// }


// //matrix multiplication using class
// const int MAX =100;
// class Matrix{
//     private:
//     int mat[MAX][MAX]; //private data member
//     int rows, cols;
//     public:

//     Matrix(int r, int c) { //matrix constructor
//     rows = r;
//     cols = c;
//     }

//     void multiply(Matrix &m1, Matrix &m2);
     
//      //getter  function to access mat
//     void input() {
//         cout << "Enter elements of the matrix:" << endl;
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//                 cin >> mat[i][j];
//             }
//         }
//     }
     
//      //setter function to access
//     void display() {
//         cout << "Resultant matrix after multiplication:" << endl;
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }



// };

// void Matrix ::  multiply(Matrix &m1, Matrix &m2) {
//         if (m1.cols != m2.rows) {
//             cout << "Matrix multiplication not possible. Columns of first matrix must be equal to rows of second matrix." << endl;
//             return;
//         }

//         for (int i = 0; i < m1.rows; ++i) {
//             for (int j = 0; j < m2.cols; ++j) {
//                 mat[i][j] = 0;
//                 for (int k = 0; k < m1.cols; ++k) {
//                     mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
//                 }
//             }
//         }

//         rows = m1.rows;
//         cols = m2.cols;
//     }



// int main(){
    // int num1,num2;
    // cin>>num1>>num2;
    // cout<<"num1"<<num1<<"num2"<<num2<<endl;
    // swapper Swapnums;
    // Swapnums.Swap(num1, num2);
    // cout<<"after swapping"<<endl;
    // cout<<"num1"<<num1<<"num2"<<num2<<endl;
    
    // a A;//oBject A
    // b B;//oBject B
    // A.setdata(10);
    // B.setdata(20);
    // comparison(A,B);

    a A; // Object A
    b B; // Object B
    A.setdata(10);
    B.setdata(20);
    swapper(A, B);

    // Print the swapped values
    cout << "After swapping:\n";
    cout << "A.x: " << A.x << ", B.y: " << B.y << endl;




    // const int max= 100;
    // cin>>size;
    // int arr1[100][100],arr2[100][100],arr3[100][100];
    // int row1,row2,cols1,cols2;
    // cout << "Enter rows and columns of first matrix: ";
    // cin >> rows1 >> cols1;
    // cout << "Enter rows and columns of second matrix: ";
    // cin >> rows2 >> cols2;

    // if (cols1 != rows2) {
    //     cout << "Matrix multiplication not possible. Columns of first matrix must be equal to rows of second matrix." << endl;
    //     return 0;
    // }

    // cout << "Enter elements of first matrix:" << endl;
    // for (int i = 0; i < rows1; ++i) {
    //     for (int j = 0; j < cols1; ++j) {
    //         cin >> arr1[i][j];
    //     }
    // }

    // cout << "Enter elements of second matrix:" << endl;
    // for (int i = 0; i < rows2; ++i) {
    //     for (int j = 0; j < cols2; ++j) {
    //         cin >> arr2[i][j];
    //     }
    // }
    //  // Multiplying matrices
    // for (int i = 0; i < rows1; ++i) {
    //     for (int j = 0; j < cols2; ++j) {
    //         arr3[i][j] = 0;
    //         for (int k = 0; k < cols1; ++k) {
    //             arr3[i][j] += arr1[i][k] * arr2[k][j];
    //         }
    //     }
    // }



    // int rows1, cols1, rows2, cols2;
    // cout << "Enter rows and columns of first matrix: ";
    // cin >> rows1 >> cols1;
    // cout << "Enter rows and columns of second matrix: ";
    // cin >> rows2 >> cols2;

    // Matrix m1(rows1, cols1);    // Create an instance m1 of the Matrix class with dimensions rows1 x cols1
    // Matrix m2(rows2, cols2);    // Create an instance m2 of the Matrix class with dimensions rows2 x cols2
    // Matrix m3(rows1, cols2); // Create an instance result of the Matrix class with dimensions rows1 x cols2
    // m1.input();
    // m2.input();
    // m1.display();
    // m2.display();
    // m3.multiply(m1,m2);
    // m3.display();


    


    

       return 0;

}

