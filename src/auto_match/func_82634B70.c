void fn_82634B70(unsigned int *bits, unsigned int n, unsigned int *info)
{
    unsigned int b;
    if ((info[0] & 0x1f) > 0x13)
        return;
    b = n * 4;
    if ((info[1] & 7) != 7)
        bits[b >> 5] |= 1 << (b & 0x1f);
    if ((info[1] & 0x38) != 0x38)
        bits[(b + 1) >> 5] |= 1 << ((b + 1) & 0x1f);
    if ((info[1] & 0x1c0) != 0x1c0)
        bits[(b + 2) >> 5] |= 1 << ((b + 2) & 0x1f);
    if ((info[1] & 0xe00) != 0xe00)
        bits[(b + 3) >> 5] |= 1 << ((b + 3) & 0x1f);
}
