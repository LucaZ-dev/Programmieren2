#include <iostream>
#include <queueobject.cpp>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Queue Q;
    Q.insert(100);
    Q.insert(10);
    Q.insert(1);
    cout << Q.search(10) << endl;
    Q.deletion(10);
    cout << Q.search(10) << endl;
    cout << Q.getNext() << endl;
    cout << Q.getNext() << endl;


// operator[] doesnt work
// wrong value assigned when deleting
}
