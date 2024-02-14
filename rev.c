#include <stdio.h>



int main (){

    char myS[1000] = "Hello world";

    /*find the index of /0 character*/
    int j, endS;

    for (j=0; j<100; j++){
        if(myS[j] == 0){
            endS = j;
            break;
        }
    }
    printf("%d\n", endS);



    return 0;
}