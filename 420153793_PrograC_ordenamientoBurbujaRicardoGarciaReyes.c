#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
    int x,arr[10],temporal;
    srand(time(NULL));
    for(x=0;x<10;x++){
    arr[x]=rand()%100;
    printf("%d ",arr[x]);
    }
    printf(" \n");
    printf("Arreglo de 10 números desordenado\n");
    for (int i =0; i<10; i++){
        for(int z=0; z<10 ;z++){
            if(arr[z]>arr[z+1]){
                temporal = arr[z+1];
                arr[z+1] = arr[z];
                arr[z]= temporal;
            }
        }
    }
    printf(" \n");
    printf("Arreglo de 10 números ya ordenado\n");
    for(int y=0; y<10; y++){
        printf("%d ",arr[y]);
    }

return 0;
}

  