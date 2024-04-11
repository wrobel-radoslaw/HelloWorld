#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!\n";

    string HelloWorld = "Hello World!";
    for(int i = 0; i < HelloWorld.length(); i++)
    {
        cout << HelloWorld.at(i) << endl;
    }
    return 0;
}