#include <iostream>
#include <conio.h>
using namespace std;
struct Node{
    char data;
    Node* link;
};

class Stack{
private:
    Node* head;
public:
    Stack(){
        head = NULL;
    }

    void push(char e){
        Node* temp = new Node;
        temp->data = e;
        temp->link = head;
        head = temp;
    }

    char pop(){
        if(head == NULL)
            cout<<"\n Underflow Codition";
        else
        {
            Node* temp = head;
            char T = temp->data;
            head = temp->link;

            delete temp;
            return T;

        }
    }
};
int main()
{
    Stack n;
    n.push('A');
    n.push('B');
    n.push('C');
    n.push('D');
    n.push('E');

    cout<<n.pop();
    cout<<n.pop();
    cout<<n.pop();
    cout<<n.pop();
    cout<<n.pop();

}