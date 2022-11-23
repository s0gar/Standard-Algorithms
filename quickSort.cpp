#include <iostream>

using namespace std;

int getPivotElement(int arr[]){
    int arrayLength =  (sizeof(arr)/sizeof(*arr));
    
    if(arrayLength % 2 == 0){
        return arr[(arrayLength / 2) + 1];
    } else {
        return arr[arrayLength / 2];
    }
}

void swap(int *i, int *j){
    int tmp = *i;
    int *i = *j; 
    *j = tmp; 

}

int main(){
    int testArray[5] = { 1, 2, 4, 6, 1};
    int test = getPivotElement(testArray);
    
    cout << "Pivot Element: " << test << "\n";
     
}








