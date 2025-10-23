#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void swap(int a, int b){
   int t = a;
   a = b;
   b = t;
}
void SelectionSort(vector<int> &targeted_list, int n){
   //cout << setw(0) << "No.";
   //cout << setw(5) << "min\n";
   //cout << n;
   for (int i=0;i<n;i++){
      int min_index = i;
      //cout << setw(0) << i;
      for (int j=i+1;j<n;j++){
         if (targeted_list[j]<targeted_list[min_index]){
            min_index = j;
         }
      }
      swap(targeted_list[i],targeted_list[min_index]);
   }
}
void InsertionSort(vector<int> &targeted_list, int n){
    for (int i=0;i<n;i++){
        int x = targeted_list[i];
        int j = i;
        while( j>0 && targeted_list[j-1]>x){
            targeted_list[j] = targeted_list[j-1];
            j--;
        }
        targeted_list[j] = x;
    }
}
void BubbleSort(vector<int> &targeted_list, int n){
    int i,j;
    for (i=0;i<n-2;i++){
        for (j=n-1;j>i;j--){
            if (targeted_list[j]<targeted_list[j-1]){
                swap(targeted_list[j],targeted_list[j-1]);
            }
        }
    }
}
int main(){
    vector<int> l = {3,105,94,22,32,19};
    //SelectionSort(l,l.size());
    //InsertionSort(l,l.size());
    BubbleSort(l,l.size());
   return 0;
}


