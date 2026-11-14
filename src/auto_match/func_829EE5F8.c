unsigned int fn_829EE5F8(unsigned int a, unsigned int b)
{
    if (a < 1 || b < 1)
        return 1;
    while (b != 0) {
        unsigned int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
