//
//  main.cpp
//  age compound statement
//
//  Created by Nisha Ramprasath on 26/10/23.
//

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int age;
//    cout<<"enter ur age";
//    cin>>age;
//    if(age>=12 && age<=5){
//        cout << "young";    }
//    else{
//        cout<<"not young";
//    }
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 12 && age <= 50) {
        cout << "young";
    } else {
        cout << "not young";
    }
    
    return 0;
}
