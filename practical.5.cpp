#include <iostream>
#include <string>
using namespace std;

#define MAX 50

struct Player {
    int id;
    string name;
};

class StackArray {
private:
    Player stack[MAX];
    int top;

public:
    StackArray() {
        top = -1;
    }

    
    void push() {
        if (top == MAX - 1) {
            cout << "\nStack Overflow! Tournament is full.\n";
            return;
        }

        Player p;

        cout << "\nEnter Player ID: ";
        cin >> p.id;

        cin.ignore();
        cout << "Enter Player Name: ";
        getline(cin, p.name);

        top++;
        stack[top] = p;

        cout << "Player added to tournament.\n";
    }

    
    void pop() {
        if (top == -1) {
            cout << "\nStack Underflow! No players available.\n";
            return;
        }

        cout << "\nPlayer removed from tournament:\n";
        cout << "ID   : " << stack[top].id << endl;
        cout << "Name : " << stack[top].name << endl;

        top--;
    }

    
    void display() {
        if (top == -1) {
            cout << "\nTournament stack is empty.\n";
            return;
        }

        cout << "\n===== Tournament Players =====\n";

        for (int i = top; i >= 0; i--) {
            cout << "ID   : " << stack[i].id << endl;
            cout << "Name : " << stack[i].name << endl;
            cout << "----------------------\n";
        }
    }
};

int main() {
    StackArray tournament;
    int choice;

    do {
        cout << "\n===== TOURNAMENT STACK - ARRAY =====\n";
        cout << "1. Add Player (Push)\n";
        cout << "2. Remove Player (Pop)\n";
        cout << "3. Display Players\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tournament.push();
                break;

            case 2:
                tournament.pop();
                break;

            case 3:
                tournament.display();
                break;

            case 4:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

