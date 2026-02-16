#include <iostream>
using namespace std;

int main() {
    char again;

    do {
        double sales[5][4]={0};
        int s,p;
        double amount;
        char more;

        do{

        cout << "Salesperson(1-4): ";
        cin >> s;

        cout << "Product (1-5): ";
        cin >> p;

        cout << "Amount sold: ";
        cin >> amount;

        sales[p-1][s-1]+= amount;

        cout << "Add another sale? ";
        cin>>more;

        }while(more=='y');

        cout <<"\nProduct\t 1\t 2\t 3\t 4\t Total\n";

        double colTotal[4]={0};
        double grandTotal =0;

        for(int i=0;i<5;i++){
            double rowTotal=0;
            cout << i+1 <<"\t";

            for (int j=0;j<4;j++){
                cout << sales[i][j] << "\t";
                rowTotal +=sales[i][j];
                colTotal[j]+=sales[i][j];
            }
            cout <<rowTotal << endl;
            grandTotal += rowTotal;
        }
        cout <<"Total ";
        for (int j=0;j<4;j++)
            cout << colTotal[j]<<"\t";

        cout << grandTotal <<endl;

        cout << "\nRun program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
