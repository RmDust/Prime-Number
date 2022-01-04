
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool IsPrimeNumber(unsigned long int Prime) {
        
        if(Prime < 2) {
                return false;
        }
        
        for(unsigned long int N = 1; N < Prime; N += 1) {
		
		// Is not Prime Number.
                if(!(Prime % N) && N != 1) {	
                        return false;
		}
	}
        
        return true;
}

int* GetPrimeNumber(size_t Starting, size_t EndingIndex) {
        
        if(Starting > EndingIndex) {
                return 0;
        }
        
        
        int* List = 0;
        List = (int* )malloc(sizeof(int) * (EndingIndex - Starting));
        
        if (List == 0) {
                return 0;
        }
        
        
        for(size_t Index = 0; Starting <= EndingIndex; Starting += 1) {
                if(IsPrimeNumber(Starting)) {
                        List[Index] = Starting;
                        
                        Index += 1;
                }
        }
        
        return List;
}

