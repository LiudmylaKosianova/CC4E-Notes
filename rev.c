#include <stdio.h>



int main (){

    char myS[1000] = "Hello world";

    /*find the index of /0 character*/
    int j, endS, i;

    for (j=0; j<100; j++){
        if(myS[j] == 0){
            endS = j;
            break;
        }
    }

    char mySR[endS+1];
    mySR[endS+1] = 0;

    for(i = 0, j=endS-1; j>=0; i++,j--){
        
        mySR[i] = myS[j];
        //printf("%c at %d ->%c at %d\n", myS[j],j, mySR[i],i);
    }
    printf("%s\n", myS);
    printf("Resversed string is : %s\n", mySR);
    

    return 0;
}