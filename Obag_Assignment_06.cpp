#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct student{
    int studentID;
    string name;
    string course;
    float gpa;
    string standing;
};
string getstanding(float gpa){
    if(gpa>=90 && gpa<=100){
        return "Excellent";
    }else if(gpa>=80){
        return "Very Good";
    }else if(gpa>=70){
        return "Good";
    }else if(gpa>=60){
        return "Passing";
    }else{
        return "Failed";
    }
}
int main(){
    char c;
    do{
    int n;

    cout<< "Enter number of student: ";
    cin>>n;

    student s[n];

    for(int i=0; i< n;i++){
        cout << "\nStudent "<<i+1<< endl;

        //Checking if the ID is unique
        bool isUnique;
        do{
            isUnique=true;

            cout << "Enter student ID: ";
        cin>>s[i].studentID;

        for(int j=0;j<i;j++){
            if(s[i].studentID==s[j].studentID){
                cout << "ID already exist! Enter again\n";
                isUnique=false;
                break;
            }
        }
        }while(!isUnique);
        cin.ignore();

        cout << "Enter name: ";
        getline(cin,s[i].name);

        cout << "Enter course: ";
        getline(cin,s[i].course);

        cout << "Enter GPA (0-100): ";
        cin >> s[i].gpa;

        s[i].standing = getstanding(s[i].gpa);
    }
    //Display
    cout<< "===== STUDENT RECORD =====\n";
    cout << left << setw(20) << "ID"
         << setw(20)<< "Name"
         << setw(15)<< "Course"
         << setw(10)<< "GPA"
         << setw(20)<< "Standing" << endl;
    cout<< "----------------------------------------------------------------------------------------\n";

    for(int i=0; i<n; i++){
        cout <<left << setw(20)<<s[i].studentID
             <<setw(20)<<s[i].name
             <<setw(15)<<s[i].course
             <<setw(10)<<s[i].gpa
             <<setw(20)<<s[i].standing << endl;
    }

    cout << "Repeat? ";
    cin>> c;
}while (tolower(c)=='y');

return 0;
}
