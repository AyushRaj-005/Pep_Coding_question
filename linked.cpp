#include <iostream>
using namespace std;

struct node {
    int info;
    node* link;
};

node* start = NULL;

void insertL(int item) {
    node* ptr = new node;
    ptr->info = item;
    ptr->link = NULL;

    if (start == NULL) {
        start = ptr;
    }
    else {
        node* ptr2 = start;

        while (ptr2->link != NULL) {
            ptr2 = ptr2->link;
        }

        ptr2->link = ptr;   // Corrected
    }

    cout << "ITEM Added Successfully at last..." << endl;
}

void display() {
    node* temp = start;

    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main() {
    int op, val;

    do {
        cout << "\n===== LINKED LIST OPERATIONS =====" << endl;
        cout << "1. Insert Last" << endl;
        cout << "2. Display" << endl;
        cout << "0. Exit" << endl;
        cin >> op;

        if (op == 1) {
            cout << "Enter Value to be added: ";
            cin >> val;
            insertL(val);
        }
        else if (op == 2) {
            display();
        }

    } while (op != 0);

    return 0;
}
