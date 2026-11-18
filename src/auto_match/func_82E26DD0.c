/* Reduces the fraction num/den by the greatest common divisor of both. */
void fn_82E26DD0(unsigned int num, unsigned int den, unsigned int *outNum, unsigned int *outDen)
{
    unsigned int divisor = den;
    unsigned int gcd = num;
    unsigned int rest;

    if (num < den) {
        gcd = den;
        divisor = num;
    }
    while (divisor != 0) {
        rest = gcd % divisor;
        gcd = divisor;
        divisor = rest;
    }
    *outNum = num / gcd;
    *outDen = den / gcd;
}
