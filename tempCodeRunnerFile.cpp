
#include <iostream>
using namespace std;

int main () {

    int a[3][3];
    int i,j;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The 3x3 matrix is: " << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The transpose of given matrix is: " << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }

return 0;
}