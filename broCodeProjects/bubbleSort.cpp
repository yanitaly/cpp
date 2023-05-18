#include <iostream>

void sort(int array[], int size);

int main(){
    int myArray[] = {1,5,3,4,2};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    sort(myArray, size);

    for(int element : myArray){
        std::cout << element << ' ';
        ;
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size -i -1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }
    }

}