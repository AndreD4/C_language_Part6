#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int scores[] {10, 20, 30};
    
    for (int scores: scores)
        cout << scores << endl;
    cout << endl;
    return 0;    
}