void fn_82D49540(unsigned char *out, int unused, const unsigned int *bits, unsigned int index)
{
    *out = (bits[bits[0] + 1 + index / 31] & (1U << (index % 31))) != 0;
}
