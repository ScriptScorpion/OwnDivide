#pragma once
#include <stdlib.h>
constexpr long int divide(const long int dividend, const long int divisor) noexcept {
    if (divisor == 0 || dividend == 0) {
        return 0;
    }
    
    long int result = 0;
    long int remainder = abs(dividend);
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
constexpr long int remainder(const long int dividend, const long int divisor) noexcept {
    if (divisor == 0 || dividend == 0) {
        return 0;
    }
    
    long int result = 0;
    long int remainder = abs(dividend);
    long int abs_divisor = abs(divisor); // removing negative values
    
    while (remainder >= abs_divisor) {
        remainder = remainder - abs_divisor;
        ++result;
    }
    
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        result = -result;
    }
    
    return remainder;
}
