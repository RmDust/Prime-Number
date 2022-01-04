
#include <stdio.h>


int main(int argc, char *argv[]) {
        
        struct _Number {
                
                unsigned long int Count;
                
                // 0 ~ 4294967295
                unsigned long int Range;
        } Number;
        
        Number.Count = 0;
        Number.Range = 0;
        
        printf("%s", "Need to find the range of prime numbers:");
        scanf("%d", &Number.Range);        
        printf("%s", "\n");
        
        for(unsigned long int Index = 0; Index <= Number.Range; Index += 1) {
    		for(unsigned long int N = 1; N < Index; N += 1) {
    			
    			// Is not Prime Number.
                        if(!(Index % N) && N != 1) {	
                                break;
    			}
    			
    			// N + 1 is Index itself.
		        if(Index == (N + 1)) { 
		                printf("%d ",Index);                               
		        
        			Number.Count += 1;
        		}
    			
    		}
        }
        
        
        printf("%s%s%d%s%d", 
                "\n",
                "There are ", 
                Number.Count, 
                " prime numbers from 0 to ", 
                Number.Range 
        );
        
       
       
       return 0; 
}
