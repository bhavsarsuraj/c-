//////
//////  main.cpp
//////  bribe
//////
//////  Created by Suraj Bhavsar on 09/08/19.
//////  Copyright © 2019 Dheeraj Bhavsar. All rights reserved.
//////
////
//////#include <iostream>
//////#include<math.h>
//////using namespace std;
//////int main() {
//////
//////    bool isFound, bribeExceeded= false;
//////    int position, count = 1, bribe = 0;
//////
//////    int arr[6] = {1,2,3,5,6,4};
//////
//////    while(count <= 6) {
//////        position = -count + 1;
//////        isFound = false;
//////        for(int i = 0; i < 6; i++) {
//////            if(arr[i] == count && i!= count) {
//////                if(abs(position) <= 2) {
//////                    isFound = true;
//////                    bribe++;
//////                } else {
//////                    bribeExceeded = false;
//////                }
//////            }
//////
//////            position++;
//////            if(bribeExceeded || isFound) {
//////                break;
//////            }
//////        }
//////        if(bribeExceeded) {
//////            cout<<"Bribe Exceeded\n";
//////            break;
//////        }
//////
//////        count++;
//////    }
//////
//////    cout<<"bribe is given "<<bribe<<" times\n";
//////    return 0;
//////}
////
////
////#include<iostream>
////using namespace std;
////class item
////{
////    static int count ;
////    int number;
////public:
////    int getdata(int a)
////    {
////        number= a;
////        count++;
////        return count;
////    }
////    void getcount()
////    {
////        cout<<"count: ";
////        cout<<count<<"\n";
////
////    }
////};
////int item :: count;
////int main()
////{
////    item a,b,c;
////    a.getcount();
////    b.getcount();
////    c.getcount();
////
////    a.getdata(100);
////    b.getdata(200);
////    c.getdata(300);
////
////    cout<<"after reading data"<<"\n";
////    a.getcount();
////    b.getcount();
////    c.getcount();
////}
//
//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int x =1;
//    switch (x) {
//        case 1:
//            cout<<"1"<<endl;
//
//        case 2:
//            cout<<"Wrong"<<endl;
//
//
//
//        default:
//            cout<<"D";
//    }
//}
//


