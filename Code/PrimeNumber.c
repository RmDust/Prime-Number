
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

int* GetPrimeNumber(size_t Index, size_t ToIndex) {
        
        if(Index > ToIndex) {
                return 0;
        }
        
        
        int* List = 0;
        List = (int* )malloc(sizeof(int) * (ToIndex - Index));
        
        if (List == 0) {
                return 0;
        }
        
        
        for(size_t N = 0; Index <= ToIndex; Index += 1) {
                if(IsPrimeNumber(Index)) {
                        List[N] = Index;
                        
                        N += 1;
                }
        }
        
        return List;
}

int CountPrimeNumber(size_t Index, size_t ToIndex) {
        if(Index > ToIndex) {
                return 0;
        }
        
        
        size_t N = 0;
        
        for(; Index <= ToIndex; Index += 1) {
                if(IsPrimeNumber(Index)) {
                        N += 1;
                }
        }
        
        return N;
}

int WherePrimeNumber(unsigned long int Prime) {
        
        size_t Index = 0;
        
        if(!IsPrimeNumber(Prime)) {
                return -1;
        }
        
        for(unsigned long int N = 1; N <= Prime; N += 1) {
                if(IsPrimeNumber(N)) {
                        Index += 1;
                }
        }
        
        return Index - 1;
}

