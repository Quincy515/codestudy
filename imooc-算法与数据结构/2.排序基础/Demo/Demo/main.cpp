//
//  main.cpp
//  Demo
//
//  Created by TianXiaoqiang on 2017/11/30.
//  Copyright © 2017年 TianXiaoqiang. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(int argc, const char * argv[]) {
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(a, 10);
    for ( int i = 0; i < 10; i ++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    // insert code here...
    // std::cout << "Hello, World!\n";
    return 0;
}
