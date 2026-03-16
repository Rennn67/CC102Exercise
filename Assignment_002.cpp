#include<iostream>
#include<vector>
using namespace std;

void analyzeGrade(vector<vector<double>> *grades, int students, int subjects){
    double highest =(*grades)[0][0];

    cout << "==== MATRIX ====\n";
    for(int i=0; i<students; i++){
        double sum=0;
        for(int j=0;j<subjects;j++){
            cout<<(*grades)[i][j]<<"\t";
            sum+=(*grades)[i][j];

            if((*grades)[i][j]>highest){
                highest=(*grades)[i][j];
            }
        }
        double average= sum/subjects;
        cout<<" | Average: "<<average << endl;
    }
}
int main(){
    int students, subjects;

    cout<< "Enter number of students: ";
    cin>> students;

    cout<< "Enter number of subjects: ";
    cin>> subjects;

    vector<vector<double>>grades(students,vector<double>(subjects));

    cout <<"==== GRADES ====\n";
    for(int i=0; i<students; i++){
        for(int j=0;j<subjects;j++){
            cout << "Student "<<i+1<<", subject "<<j+1<<": ";
            cin>> grades[i][j];
        }
    }
    analyzeGrade(&grades, students,subjects);

    return 0;
}
