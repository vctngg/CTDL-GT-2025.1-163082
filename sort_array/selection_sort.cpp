#include <iostream>
#include <iomanip>
using namespace std;

void SelectionSort(int arr[], int n){
   cout << "No.";
   cout << setw(10) << "min\n";
   for (int i=0;i<n-1;i++){
      int min_index = i;
      cout << i+1;
      for (int j=i+1;j<n;j++){
         if (arr[j]<arr[min_index]){
            min_index = j;
         }
      }
      cout << setw(10) << arr[min_index];
      swap(arr[i],arr[min_index]);
      for (int k=0;k<n;k++){
        cout << setw(10) << arr[k];
      }
      cout << "\n";
   }
}

int main(){
    int l[] = {3,105,94,22,32,19};
    SelectionSort(l,6);
   return 0;
}


