#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;
 
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
 
    istringstream ss(input);
    string word;
    int queueNumber = 1;
 
    while (ss >> word) {
        queue<char> charQueue;
        
        for (int i = 0; i < word.size(); i++) {
            charQueue.push(word[i]);
        }
 
        cout << "Q" << queueNumber << " = ";
        while (!charQueue.empty()) {
            cout << charQueue.front();
            charQueue.pop();
            if (!charQueue.empty()) {
                cout << " -> ";
            }
        }
        cout << endl;
        queueNumber++;
    }
 
    return 0;
}