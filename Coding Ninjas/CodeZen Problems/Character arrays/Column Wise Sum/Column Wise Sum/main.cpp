//
//  main.cpp
//  Column Wise Sum
//
//  Created by Suraj Bhavsar on 08/03/20.
//  Copyright © 2020 Suraj Bhavsar. All rights reserved.
//

#include <iostream>
using namespace std;

void print(int arr[][100], int m, int n) {
    for(int i = 0 ; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    
    int arr[100][100];
    int m, n;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    print(arr, m, n);
    
//    int m,n;
//    cin>>m>>n;
//
//    int sum[n];
//    for(int i = 0; i < n; i++) {
//        sum[i] = 0;
//    }
//
//    int arr[m][n];
//    for (int i = 0; i < m; i++) {
//        for(int j = 0; j < n; j++) {
//            cin>>arr[i][j];
//            sum[j] += arr[i][j];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        cout<<sum[i]<<" ";
//    }
//
    
    
}
