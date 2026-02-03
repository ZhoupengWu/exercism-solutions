#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) {
    unsigned int result = number * (number + 1) * (2 * number + 1) / 6;

    return result;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int result = ((number + 1) * number / 2);
    
    return result * result;
}

unsigned int difference_of_squares(unsigned int number) {
    return (sum_of_squares(number) - square_of_sum(number)) * -1;
}