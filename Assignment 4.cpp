#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    fstream file;

    file.open ("color.txt",ios::out);
    if(file.is_open()){
        file << "Red\n";
        file << "Blue\n";
        file << "Green\n";
        file << "Yellow\n";
        file << "Purple\n";
        file.close();
        cout << "Write successfully!\n";
    }else{
        cout<<"Failed to create color.txt\n";
        return 1;
    }

    fstream copyFile;

    file.open("color.txt", ios::in);
    copyFile.open("color_copy.txt",ios::out);

    if(file.is_open() && copyFile.is_open()){
        string line;
        while(getline(file,line)){
            copyFile << line << endl;
        }
        file.close();
        copyFile.close();

        cout << "File copied successfully!\n";
    }else{
        cout << "Error opening files for copying.\n";
        if(file.is_open()) file.close();
        if(copyFile.is_open())copyFile.close();
        return 1;
    }
    return 0;

}
