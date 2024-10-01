#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    
    //constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    //insertion
    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[index] > arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }else{
                return;
            }
        }
    }

    //print heap
    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    /* code */
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(33);
    h.print();
    return 0;
}