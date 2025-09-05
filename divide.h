#pragma once
#include <stdlib.h>
static inline int divide(const long int dividend, const long int divisor) {
    if (divisor == 0 || dividend == 0) {
        return 0;
    }
    
    long int result = 0;
    long int remainder = abs(dividend); // you can edit function to return remainder
    long int abs_divisor = abs(divisor); // removing negative values
    
    while (remainder >= abs_divisor) {
        remainder = remainder - abs_divisor;
        ++result;
    }
    
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        result = -result;
    }
    
    return result;
}
