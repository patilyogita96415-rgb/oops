#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int x) {
    Node *newNode = new Node;

    newNode->data = x;
    newNode->next = NULL;

    if(front == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if(front == NULL) {
        cout << "Queue Underflow\n";
    }
    else {
        Node *temp = front;

        cout << "Deleted: " << front->data << endl;

        front = front->next;

        if(front == NULL)
            rear = NULL;

        delete temp;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();

    return 0;
}