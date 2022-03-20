#include <iostream>
#include "Dequeue.h"

using namespace std;

int main(){
    int n,val;

    Dequeue my_deq;    

    cout << "Welcome this is my Dequeue list "<<endl;
    cout <<"1. To add element at front"<<endl;
    cout <<"2. To add element at back"<<endl;
    cout <<"3. To remove element at front"<<endl;
    cout <<"4. To remove element at back"<<endl;
    cout <<"5. To get element at front"<<endl;
    cout <<"6. To get element at back"<<endl;
    cout <<"7. To exit this program"<<endl;
    while (true)
    {
        cout << "Your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter number to add : ";cin >> val;
            my_deq.addFront(val);
            break;
        case 2:
            cout << "Enter number to add : ";cin >> val;
            my_deq.addBack(val);
            break;
        case 3:
            my_deq.removeFront();
            break;
        case 4:
            my_deq.removeBack();
            break;
        case 5:
            cout << my_deq.getFront()<<endl;
            break;
        case 6:
            cout << my_deq.getBack()<<endl;
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
        }

    }
    

    return 0;
}