#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={5,8,9,7,2};
    int n=5;
    int brr[5];
    for(int i=0; i<n; i++){
        brr[i]=arr[n-1-i];
    }

    cout<<"The Reverse array is: ";
    for(int i=0; i<5; i++){
        cout<<brr[i]<<" ";
    } 
}

//                       (2)

// //Reverse Without Using Extra array:

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[5]={5,8,9,7,2};
//     int n=5;
//     for(int i=0,j=n-1-i; i<n,i<j; i++,j--){
//         int temp=arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//            // Alternative loop:
//     // for(int i=0; i<n/2; i++){
//     //     int temp=arr[i];
//     //     arr[i]=arr[n-1-i];
//     //     arr[n-1-i]=temp;
//     // }

//     cout<<"The Reverse array is: ";
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// //  or,
// #include <iostream>
// using namespace std;

// int main() {
//     int a[] = {12,6,7,34,9,230,2,8};
//     int n = sizeof(a)/4;
    
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
    
//     // reverse
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
    
//     cout<<endl;
    
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
// }