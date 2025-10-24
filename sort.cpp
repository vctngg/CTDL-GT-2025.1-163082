#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

void SelectionSort(vector<int> &targeted_list, int n){
   cout << "No.";
   cout << setw(10) << "min\n";
   for (int i=0;i<n-1;i++){
      int min_index = i;
      cout << i+1;
      for (int j=i+1;j<n;j++){
         if (targeted_list[j]<targeted_list[min_index]){
            min_index = j;
         }
      }
      cout << setw(10) << targeted_list[min_index];
      swap(targeted_list[i],targeted_list[min_index]);
      for (int k=0;k<n;k++){
        cout << setw(10) << targeted_list[k];
      }
      cout << "\n";
   }
}
void InsertionSort(vector<int> &targeted_list, int n){
    cout << "No.";
    cout << setw(10) << "Target\n";
    for (int i=1;i<n;i++){
        cout << i;
        cout << setw(10) << targeted_list[i];
        int x = targeted_list[i];
        int j = i;
        while( j>0 && targeted_list[j-1]>x){
            targeted_list[j] = targeted_list[j-1];
            j--;
        }
        targeted_list[j] = x;
        for (int k=0;k<n;k++){
            cout << setw(10) << targeted_list[k];
        }
        cout << "\n";

    }
}
void BubbleSort(vector<int> &targeted_list, int n){
    int i,j;
    cout << "No.\n";
    for (i=0;i<n-2;i++){
        cout << i+1;
        for (j=n-1;j>i;j--){
            if (targeted_list[j]<targeted_list[j-1]){
                swap(targeted_list[j],targeted_list[j-1]);
            }
        }
        for (int k=0;k<n;k++){
            cout << setw(10) << targeted_list[k];
        }
        cout << '\n';
    }
}
int main(){
    vector<int> l = {3,105,94,22,32,19};
    //SelectionSort(l,l.size());
    //InsertionSort(l,l.size());
    BubbleSort(l,l.size());
   return 0;
}


