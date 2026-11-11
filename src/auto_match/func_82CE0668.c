extern int NetDll_XNetRandom(int caller, unsigned char *buf, unsigned int size);

int fn_82CE0668(unsigned char *buf, unsigned int size)
{
    return NetDll_XNetRandom(1, buf, size);
}
