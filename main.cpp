/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

float gradeToPoint(char grade) {
    switch(toupper(grade)) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return -1.0; 
    }
}

int main() {
    int n;
    char grade;
     float total = 0;
    
    cout << "จำนวนนักเรียน: ";
    cin >> n;
    
    char grades[n];
    
    
    for (int i = 0; i < n; i++) {
        cout << "กรอกเกรดของนักเรียนคนที่: " <<  i + 1 << "(A-F): ";
        cin >> grade;
        grade = toupper(grade);
        
        float point = gradeToPoint(grade);
        
        total += point;
        
}
    float average = total / n;
    
    cout << "\nค่าเฉลี่ยเกรด (GPA): " << average << endl;



    
    return 0; 
    
    
}


    