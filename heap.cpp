#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
     int arr[100];
     int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }
    
    void insert(int value){
        size = size + 1;
        int index = size;
        arr[index] = value;

        while(index > 1){
            int pIdx = index/2;
            if(arr[pIdx] < arr[index]){
                swap(arr[pIdx],arr[index]);
                index = pIdx;
            }
            else
            return;
        }
    }

    void del(){
        if(size == 0){
            cout<<"Nothing to delete"<< endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int idx = 1;

        while(idx < size){
            int leftIdx = 2*idx;
            int rightIdx = 2*idx+1;
            int index = leftIdx;

            if(leftIdx <= size && rightIdx <= size && arr[leftIdx] < arr[rightIdx])
            {
                index = rightIdx;
            }

            if(index <=size && arr[idx] < arr[index])
            {
                swap(arr[idx],arr[index]);
                idx = index;
            }
            else
            return; 
        }
    }

    void print(){
        for(int i= 1; i<= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[], int size, int i){

    int idx = i;
    int leftIdx = 2*idx;
    int rightIdx = 2*idx+1;
    
    if(leftIdx <= size && arr[leftIdx] > arr[idx])
    {
        idx = rightIdx;
    }

    if(rightIdx <= size && arr[rightIdx] > arr[idx])
    {
        idx = rightIdx;
    }

    if(idx != i)
    {
        swap(arr[idx],arr[i]);
        heapify(arr,size,idx);
    }
    else
    return; 
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(54);
    h.insert(52);
    h.insert(53);
    h.print();

    h.del();
    h.print();
    return 0;
}