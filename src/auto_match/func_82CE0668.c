extern int NetDll_XNetRandom(int caller, unsigned char *buf, unsigned int size);

int XNetRandom(unsigned char *buf, unsigned int size)
{
    return NetDll_XNetRandom(1, buf, size);
}
