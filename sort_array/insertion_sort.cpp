#include <iostream>
#include <iomanip>
using namespace std;

void InsertionSort(int arr[], int n){
    cout << "No.";
    cout << setw(10) << "Target\n";
    for (int i=1;i<n;i++){
        cout << i;
        cout << setw(10) << arr[i];
        int x = arr[i];
        int j = i;
        while( j>0 && arr[j-1]>x){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = x;
        for (int k=0;k<n;k++){
            cout << setw(10) << arr[k];
        }
        cout << "\n";

    }
}

int main(){
    int l[] = {3,105,94,22,32,19};
    InsertionSort(l,6);
   return 0;
}