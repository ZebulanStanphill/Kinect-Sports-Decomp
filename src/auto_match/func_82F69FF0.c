int fn_82F69FF0(const unsigned short *a, const unsigned short *b, unsigned int n)
{
    if (n == 0) {
        return 0;
    }
    while (--n != 0 && *a != 0 && *a == *b) {
        a++;
        b++;
    }
    return (int)*a - (int)*b;
}
