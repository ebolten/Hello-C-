#include <iostream>
#include <string>
using namespace std;

void hello()
{
    int times;
    cout << "How many times would you like to say \"Hello World\"?" << endl;
    cin >> times;
    for (int i=0; i < times; i++)
    {
        cout << "Hello World!" << endl;
    }
}

int main()
{
    void hello();
    return 0;
}