#include <iostream>

using namespace std;

int main() 
{
    
//    for (int i{1} ; i <=10 ; ++i)
//        cout << i << endl;


//    for (int i{1} ; i <=10 ; i+=2)
//        cout << i << endl;

//    for (int i{10}; i >0 ; --i)
//        cout << i << endl;
//    cout << "Blast off" << endl;


//    for (int i{10} ; i <=100 ; i+=10 ){
//        if(i % 15 == 0)
//            cout << i << endl;
//    }

//    for (int i{1}, j{5}; i <= 5; ++i, ++j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

//    for (int i {1}; i <= 100; ++i){
//      cout << i;
//        if (i % 10 == 0)
//            cout << endl;
//        else
//            cout << " ";
//        
//    }
    
//    for (int i {1}; i <= 100; ++i){
//      cout << i;
//        cout << ((i % 10 == 0) ? "\n" : " ");
//    }
////////////// same out come just in one line //////////////////
    for (int i {1}; i <= 100; ++i){
      cout << i << ((i % 10 == 0) ? "\n" : " ");
    }
    
    cout << endl;
    return 0;    
}