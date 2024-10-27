#include <iostream>
#include <math.h>
#include<time.h>
#include <stdlib.h>
#define n 10
#define exp 3
#define z pow(n, exp)


using namespace std;



int main()
{
    srand((unsigned)(0));
    int ran_data;
    for(float index = 0.5; index<=1;index++){
        ran_data = (rand() % 5129) + 1;
    }
    
    
    
    
    
    FILE *fp;
    fp = fopen("sample.txt", "w+");
    
    
    int *ptr;
    int a;
    
    ptr = (int *)calloc(a, sizeof(int));
    
    
    int countRow;
    for (int i = 1; i <= z; i++)
    {
        int countRow = 0;
        for (int j = i; j <= z; j++)
        {
            if ((i*j) % ran_data == 1)
            {
                ptr[countRow] = 0;
                
                countRow++;
            }
            else{
                ptr[countRow]=1;
            }

        }
        
        fprintf(fp, "%d\t", countRow);

        for (int i = 0; i < countRow; i++)
        {

            fprintf(fp, "%d\t", ptr[i]);
        }
        fprintf(fp, "\n");
    }
    free(ptr);
    fclose(fp);

    return 0;
}

