#include <iostream>
using namespace std;

class Que
{
public:
    int size;
    int *q;
    int front;
    int rear;

    Que()
    {
        size = 10;
        q = new int[size];
        front = -1;
        rear = -1;
    }

    Que(int x)
    {
        size = x;
        q = new int[size];
        front = -1;
        rear = -1;
    }

    bool is_empty()
    {
        if (rear == -1)
            return true;
        else
            return false;
    }

    bool is_full()
    {
        if (rear == size - 1)
            return true;
        else
            return false;
    }

    void display()
    {
        if (is_empty())
        {
            cout << "\n under flow";
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << "\nValue at index " << i << " is: " << q[i];
            }
        }
    }

    void Enqueue(int x)
    {
        if (is_full())
        {
            cout << "\n queue main jga nhi hy";
        }
        else
        {
            if (is_empty())
            {
                front = rear = 0;
            }
            else
            {
                rear++;            // move rear forward
            }
            q[rear] = x;           // insert value
        }
    }

    int Dequeue()
    {
        if (is_empty())
        {
            cout << "\nQueue is already empty";
            return -1;             // no element to remove
        }
        else
        {
            int x = q[front];      // take value from front
            if (front == rear)
            {
                // queue becomes empty after removing last element
                front = rear = -1;
            }
            else
            {
                front++;            // move front forward
            }
            return x;
        }
    }
};

int main()
{
    Que q1;
    Que q2(5);
    Que q3(15);

    q1.Enqueue(5);
    q2.Enqueue(7);
    q3.Enqueue(6);

    int x = q2.Dequeue();

    cout << "\nDequeued element from q2 is: " << x;

    return 0;
}
