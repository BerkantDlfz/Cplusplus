#include <iostream>

int mult(int x,int y){

    return x*y;
}





int e(int n,int k=2){
    if(k==2)
        return(n*n);
    else
        return(mult(n,k-1)*n);
}
using namespace std;

int main() {
   cout<<e(7)<<endl;
    return 0;



}

