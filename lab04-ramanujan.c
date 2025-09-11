#include <stdio.h>

int main(){
    int l=1800;
    for (int i = 1; i < l-1; i++)
    {
        for (int j = i+1; j <= l; j++)
        {
            for (int k = j+1; k <= l; k++)
            {
                if(((i*i*i)+(j*j*j))==k){
                    printf("(%d)+(%d) = %d\n",(i*i*i),(j*j*j),k);
                    // Collect i&j
                }
            }
            
        }
        
    }
    

    return 0;
}