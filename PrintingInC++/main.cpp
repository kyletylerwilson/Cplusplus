//
//  main.cpp
//  PrintingInC++
//
//  Created by Kyle Wilson on 2023-09-19.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std; //this allows for us to just specify the function from this framework instead of writing out the whole thing
    cout << "Hello, World!\n";
    for(int i = 1; i < 10; i++)
    {
        cout << "Hello there" << endl;
    }
    string users[11] = {"H", "E", "L", "L", "O", " ", "W", "O", "R", "L", "D"};
    
    
    for(int i = 0; i < 11; i++)
    {
        cout << users[i] << endl;
    }
    return 0;
}
