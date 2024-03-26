#include <iostream>
using namespace std;
float calculate_cgpa(float marks[],float credits[],int subjects){
    float totalcredits = 0;
    float totalgrades = 0;
    for(int i = 0; i<subjects; i++){
      
        cout << "Enter marks for subject out of 100 " << i + 1 << ": ";
        cin >> marks[i];
        cout << "Enter credits for subject out of 10 " << i + 1 << ": ";
        cin >> credits[i];
        totalcredits += credits[i];
        totalgrades += (marks[i] / 10) * credits[i];
    }
    return totalgrades/totalcredits;
}

int main(){
    const int totalsub = 5;
    float marks[totalsub];
    float credits[totalsub];
    cout<<"This is a cgpa calculator"<<endl;
    float cgpa = calculate_cgpa(marks,credits,totalsub);
     cout << "Your CGPA is: " << cgpa << endl;
     return 0;
}
