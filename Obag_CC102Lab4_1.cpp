#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        int students, quizzes;

        cout << "Number of students: ";
        cin >> students;

        cout << "Number of quizzes: ";
        cin >> quizzes;

        int scores[students][quizzes];

        for (int i = 0; i < students; i++) {
            cout << "\nStudent " << i + 1 << endl;
            for (int j = 0; j < quizzes; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
            }
        }

        cout << "\nStudent Quiz Scores and Averages\n";

        for (int i = 0; i < students; i++) {
            int sum = 0;
            cout << "Student " << i + 1 << ": ";

            for (int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << " ";
                sum += scores[i][j];
            }

            double average = (double)sum / quizzes;
            cout << "| Average: " << average << endl;
        }

        cout << "\nRun program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
