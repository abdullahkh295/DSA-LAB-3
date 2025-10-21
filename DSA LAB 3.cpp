#include <iostream>
using namespace std; 
#define SIZE 5   
 
class Queue {
    int arr[SIZE];
    int front, rear;
 
public:
    Queue() {
        front = -1;
        rear = -1;
    }
 
    void Enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is Full!\n";
        } else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " added to queue.\n";
        }
    }
 
    void Dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!\n";
        } else {
            cout << arr[front] << " removed from queue.\n";
            front++;
        }
    }
 
    void Display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
 
int main() {
    Queue q;
    int choice, value;
 
    do {
        cout << "\n=== Queue Menu ===\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
 
        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.Enqueue(value);
            break;
        case 2:
            q.Dequeue();
            break;
        case 3:
            q.Display();
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);
 
    return 0;
}
    