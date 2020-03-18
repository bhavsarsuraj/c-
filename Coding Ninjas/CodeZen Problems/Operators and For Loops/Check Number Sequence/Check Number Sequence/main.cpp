//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin>>n;
//    bool isDecresing = true;
//
//    int i = 1;
//
//    int prev;
//    cin>>prev;
//    while (i < n) {
//        int data;
//        cin>>data;
//        if( data > prev) {
//            isDecresing = false;
//            prev = data;
//            i++;
//            continue;
//        }
//        if(!isDecresing) {
//            if(data < prev) {
//                isDecresing = true;
//                break;
//            }
//        }
//        prev = data;
//        i++;
//    }
//    if(isDecresing) {
//        cout<<"false\n";
//    } else {
//        cout<<"true\n";
//    }
//    return 0;
//}


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int prev = -1000000;
    
    bool isIncreased = false;
    bool result = true;
    
    for (int i = 0; i < n; i++)
    {
        int next;
        cin >> next;
        if (i == 0)
        {
            prev = next;
            continue;
        }
        if (prev > next)
        {
            if (isIncreased)
            {
                result = false;
                break;
            }
        }
        else
        {
            isIncreased = true;
        }
    }
    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}
