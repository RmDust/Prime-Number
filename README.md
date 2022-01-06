# Prime-Number  
![GitHub Last Commit](https://img.shields.io/github/last-commit/bre97-web/Prime-Number?color=%234b8bf5&label=Last%20commit)
![GitHub commits since latest release (by date) for a branch](https://img.shields.io/github/commits-since/bre97-web/Prime-Number/latest?color=%234b8bf5&label=Commits%20since%20last%20release)  

![Version 1.0.1](https://img.shields.io/badge/Version-1.0.1-lightgreen)
![Codename January 2022](https://img.shields.io/badge/Codename-January%202022%20Recovery%201-lightgreen)  

![C program language](https://img.shields.io/badge/Language-C-lightgreen)
![Students are object](https://img.shields.io/badge/Object-Students-lightgreen)
  
## Instruction  
Prime Numbers in C Language Teaching.  

- Impotant  
  + **need for some students, eazy-code goto -> Release -> 1.0.0 please.**  
  + **you can NOT easy to get easy-code from 1.0.1**  

### Interface  
|Interface                       |Return |Tips                 |
|:---                            |:---   |                 ---:|
|IsPrimeNumber(Number)           |bool   |IsPrimeNumber(2)     |
|GetPrimeNumber(Index, ToIndex)  |int*   |GetPrimeNumber(2,7)  |
|CountPrimeNumber(Index, ToIndex)|int    |CountPrimeNumber(0,1)|
|WherePrimeNumber(Number)        |int    |WherePrimeNumber(7)  |

```C
/* Files
 *   Main.c
 *   PrimeNumber.c
 */

#include <stdio.h>
#include "PrimeNumber.h"

int main(void) {

        // Output "1".
        printf("%d", IsPrimeNumber(2));
        
        // Output "7".
        printf("%d", GetPrimeNumber(0,10)[3]);

        return 0;
}
```
