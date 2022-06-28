#include <iostream>
using std::cout;
using std::endl;

int sumRecursion(int left, int right){
    if(right > 0){
        return sumRecursion(left+1,right-1);
    } else {
        return left;
    }
}


int main(){

    cout << 3 + 5 << endl;
    cout << sumRecursion(3,5) << endl;

}