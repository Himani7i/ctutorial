#include <iostream>
using namespace std;

class template{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1, int c1);//declaration
    void getData(){
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"c:"<<c<<endl;
        cout<<"d:"<<d<<endl;
        cout<<"e:"<<e<<endl;
        }
};

void employee :: setData(int a1, int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    employee harry;
    //harry.a = 134; //this will throw error as it is private
    harry.d = 34;
    harry.e = 89;
    harry setData(1,2,4);
    harry.getData();
    return 0;
}