#include<iostream>
using namespace std;

void insertSort(int a[], int n){
   for(int i=0;i<n;i++){
       int temp=a[i];
       int j;
       for(j=i-1;j>=0;j--){
           if(temp<a[j]){
            a[j+1]=a[j];
           }
           else break;
       }
       a[j+1]=temp;
    }
    return;
}
int main()
{
    int n;
    int a[1000];
   	cout << "enter the size"<< endl;
   	cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
	cout << "sorted array = ";
    insertSort(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}