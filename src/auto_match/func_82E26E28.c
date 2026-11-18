extern void fn_82E26DD0(unsigned int num, unsigned int den, unsigned int *outNum, unsigned int *outDen);

/* Multiplies the fraction num1/den1 by num2/den2 and reduces the result. */
void fn_82E26E28(unsigned int num1, unsigned int den1, unsigned int num2, unsigned int den2,
                 unsigned int *outNum, unsigned int *outDen)
{
    if (num2 == 0 || den2 == 0 || num1 == 0 || den1 == 0) {
        *outNum = 0;
        *outDen = 0;
        return;
    }
    fn_82E26DD0(num1, den1, &num1, &den1);
    fn_82E26DD0(num2, den2, &num2, &den2);
    while (num1 > 0xffff || den1 > 0xffff) {
        num1 >>= 1;
        den1 >>= 1;
    }
    while (num2 > 0xffff || den2 > 0xffff) {
        num2 >>= 1;
        den2 >>= 1;
    }
    fn_82E26DD0(num1 * num2, den1 * den2, outNum, outDen);
}
