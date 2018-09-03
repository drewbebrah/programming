//
//  main.cpp
//  assignment 3
//
//  Created by Joy Williams on 02/09/2018.
//  Copyright © 2018 Joy Williams. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int mark;
    cout <<"ENTER MARK OF STUDENT"<<endl;
    cin>>mark;
    if (mark >= 0 && mark <=44) {
        cout <<"F"<<endl;
        cout <<"FAIL"<<endl;
    } else {
        if (mark >=45 && mark <=49) {
            cout<<"E"<<endl;
            cout<<"FAIL"<<endl;
        } else {
            if (mark >=50 && mark <=54) {
                cout <<"D" << endl;
                cout<<"CREDIT"<<endl;
            } else {
                if (mark >=55 && mark <=59) {
                    cout<<"D+"<<endl;
                    cout<<"CREDIT"<<endl;
                } else {
                    if (mark >=60 && mark <=64) {
                        cout<<"C"<<endl;
                    } else {
                        if (mark >= 65 && mark <=69) {
                            cout<<"C+"<<endl;
                            cout<<"CREDIT"<<endl;
                        } else {
                            if (mark >=70 && mark <=74) {
                                cout<<"B"<<endl;
                                cout<<"GOOD"<<endl;
                            } else {
                                if (mark >=75 && mark <=79) {
                                    cout<<"B+"<<endl;
                                    cout<<"VERY GOOD"<<endl;
                                } else {
                                    if (mark >= 80 && mark <= 100) {
                                        cout<<"A"<<endl;
                                        cout<<"EXCELLENT"<<endl;
                                    } else {
                                        cout<<"ERROR, ENTER SCORE AGAIN"<<endl;
                                    }  {
                                        
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
