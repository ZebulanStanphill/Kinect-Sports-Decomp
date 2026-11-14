int fn_82CA6768(int value, int divisor)
{
    int n = 0;
    do {
        value -= divisor;
        n++;
    } while (value >= 0);
    return n - 1;
}
