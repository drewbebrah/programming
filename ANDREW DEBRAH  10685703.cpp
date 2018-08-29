//
//  main.cpp
//  prime numbers
//
//  Created by ANDREW KWADWO DEBRAH on 28/08/2018.
//  Copyright © 2018 ANDRWEW KWADWO DEBRAH. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    bool input = true;
    cout << "ENTER ANY POSITIVE INTEGER" << endl;
    cin >> num;
    for(int i=2; i<=num/2; i++)
    {
        if (num % i ==0)
            
        {input=false;
            break;
        }
    }
    if(input==true)
        cout << "PRIME NUMBER";
    else
        cout << "NOT A PRIME NUMBER";
    
    
    
    return 0;
}
