#include <iostream>

using namespace std;

bool isOdd(int n){
return n%2==1;
}

void genapKecil(int arr[], int n){
int genapMin =-1;
int genapIndex=-1;
for (int i=0; i<n; i++){
    if(arr[i]%2==0&&genapMin==-1||arr[i]<genapMin){
        genapMin=arr[i];
        genapIndex=i;
    }
}
if (genapMin!=-1){
    cout << "genap terkecil: " << genapMin << "\n";
    cout << "index: " << genapIndex << "\n";
} else{
    cout << "tidak ada genap" << endl;
}
}
int main()
{
    int arr[]={6,7,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    genapKecil(arr, n);
    return 0;
}
