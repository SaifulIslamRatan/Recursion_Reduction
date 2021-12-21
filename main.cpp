///Question:Input an Array; Output:Sum of all Elements
///Sum of array elements using recursion
#include <iostream>

using namespace std;

int Sum_of_Array_Elements(int Array[],int Array_Size){
    if(Array_Size==1){
        return Array[0];
    }
    else{
        int First_Task = Array[Array_Size-1];/// Index will always less than one for using recursion!
        int Second_Task = Sum_of_Array_Elements(Array,Array_Size-1);
        int Result_of_all_Array_Element = Second_Task + First_Task;
        return Result_of_all_Array_Element;
    }
}
int main()
{
    int n;
    cout<<"Please enter the size number of array :";
    cin>>n;
    int Array[n];
    for(int First_Index =0;First_Index<n;First_Index++)
    cin>>Array[First_Index];
    cout<< "Sum of all array element(done by using recursive algorithm) :"<< Sum_of_Array_Elements(Array,4) <<endl;
    return 0;
}
