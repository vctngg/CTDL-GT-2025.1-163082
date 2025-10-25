#include <iostream>
#include <iomanip>
using namespace std;

void BubbleSort(int arr[], int n){
    int i,j;
    cout << "No.\n";
    for (i=0;i<n-2;i++){
        cout << i+1;
        for (j=n-1;j>i;j--){
            if (arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
        for (int k=0;k<n;k++){
            cout << setw(10) << arr[k];
        }
        cout << '\n';
    }
}

int main(){
    int l[] = {3,105,94,22,32,19};
    BubbleSort(l,6);
   return 0;
}