#include <iostream>
#include <cmath>
#include <string>
using namespace std;



//ques5
// class lengthstr{

//     private:
//     const char* str;
//     public:
//     //constructor
//     lengthstr(const char* s){
//         str = s;
//     }
//     //memberfunction
//     int findlength(){
//         int length = 0;
//         while (str[length] != '\0'){
//             length++;
//         }
//         return length;
//     }
// };

// int main(){
//     const char* inputstring = "harshit";
//     //creating class object
//     lengthstr stringlen(inputstring);
     
//      //calling member function
//     int length = stringlen.findlength();
//     cout << "Length of the string: " << length << endl;

//     return 0;
// }

// //ques 6
// class circle{
//     private:
//     int radius;
//     public:
//     circle(int r){
//         radius = r;
//     }
//     float area(int radius ){
//         float a = M_PI * pow(radius,2);
//         return a;
//     }

//     float circumference(int radius ){
//         float c = 2 * M_PI * radius;
//         return c;
//     }
// };

// int main(){
//     int radius1;
//     cin>>radius1;
//     circle aandc(radius1);
//     float a = aandc.area(radius1);
//     float c = aandc.circumference(radius1);
//     cout << "area of the circle: " << a << endl;
//     cout << "circumference of the circle: " << c << endl;
//     return 0;
// }



class Student{
    private:
    string name;
    string Class;
    int rollnum;
    float marks;
   

   public:
    void input(){
        cout<<"enter the values of name:"<<endl;
        cin>>name;
        cout<<"enter the values of Class:"<<endl;
        cin>>Class;
        cout<<"enter the values of rollnum:"<<endl;
        cin>>rollnum;
        cout<<"enter the values of marks:"<<endl;
        cin>>marks;

    }

     void display(){
        cout<<"the values of name:"<<endl;
        cout<<name;
        cout<<" the values of Class:"<<endl;
        cout<<Class;
        cout<<" the values of rollnum:"<<endl;
        cout<<rollnum;
        cout<<" the values of marks:"<<endl;
        cout<<marks;

    }
};

int main() {
    Student student;

    // Input student details
    student.input();

    // Display student details
    student.display();

    return 0;
}

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    // Constructor 
   Student(string n, string cn, int rn, float m) {
    name = n;
    className = cn;
    rollNumber = rn;
    marks = m;
    }

    
    void setName(string n) {
        name = n;
    }

    
    string getName() {
        return name;
    }

    
    void setClassName(string cn) {
        className = cn;
    }

    
    string getClassName() {
        return className;
    }

   
    void setRollNumber(int rn) {
        rollNumber = rn;
    }

    int getRollNumber() {
        return rollNumber;
    }

    void setMarks(float m) {
        marks = m;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    
  Student student("John", "10th", 101, 85.5);


// Student student;
// student.name = "John";
// student.className = "10th";
// student.rollNumber = 101;
// student.marks = 85.5;


    cout << "Student Name: " << student.getName() << endl;
    cout << "Class Name: " << student.getClassName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;
    cout << "Marks: " << student.getMarks() << endl;

    return 0;
}


//ques 8
void findRepeatingElements(int arr[], int size){
    cout<<"reapeting elements are: ";
     for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                std::cout << arr[i] << " ";
                break; // Once a repeating element is found, break the inner loop
            }
        }
    }
}
int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findRepeatingElements(arr, size);
    return 0;
}

//OR
#include <unordered_set>
class RepeatingElementsFinder {
private:
    int* arr;
    int size;

public:
    RepeatingElementsFinder(int input_arr[], int input_size) {
        arr = input_arr;
        size = input_size;
    }

    void findRepeatingElements() {
        std::unordered_set<int> seen;

        std::cout << "Repeating elements are: ";
        for (int i = 0; i < size; i++) {
            if (seen.find(arr[i]) != seen.end()) {
                std::cout << arr[i] << " ";
            } else {
                seen.insert(arr[i]);
            }
        }
    }
};



//ques 9

class MyClass {
private:
    int myNumber;

public:
    MyClass(int num) {
        myNumber = num;
    }

    void displayNumber(); // Declaration of the member function
};

// Definition of the member function outside the class
void MyClass::displayNumber() {
    std::cout << "Number stored in MyClass: " << myNumber << std::endl;
}

int main() {
    MyClass obj(42);
    obj.displayNumber(); // Calling the member function to display the number
    return 0;
}

