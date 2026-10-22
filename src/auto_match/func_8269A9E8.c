unsigned char fn_8269A9E8(unsigned int x)
{
    x = ((x >> 1) & 0x55555555) + (x & 0x55555555);
    x = ((x >> 2) & 0x33333333) + (x & 0x33333333);
    x = ((x >> 4) & 0x0f0f0f0f) + (x & 0x0f0f0f0f);
    return (unsigned char)(x % 0xff);
}
