#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    fstream file;

    file.open("original.txt", ios::out);
    if(file.is_open()){
        file << "One\n";
        file << "Two\n";
        file << "Three\n";
        file << "Four\n";
        file << "Five\n";
        file << "Six\n";
        file.close();
        cout << "original.txt created successfully!\n";
    }else{
        cout << "Failed to create original.txt\n";
        return 1;
    }

    vector<string> words;

    file.open("original.txt", ios::in);
    if(file.is_open()){
        string line;
        while(getline(file, line)){
            words.push_back(line);
        }
        file.close();
    }else{
        cout << "Failed to open original.txt\n";
        return 1;
    }

    sort(words.begin(), words.end());

    // ===== WRITE to sorted.txt =====
    fstream sortedFile;
    sortedFile.open("sorted.txt", ios::out);

    if(sortedFile.is_open()){
        for(string word : words){
            sortedFile << word << endl;
        }
        sortedFile.close();
        cout << "sorted.txt created successfully!\n";
    }else{
        cout << "Failed to create sorted.txt\n";
        return 1;
    }

    return 0;
}
