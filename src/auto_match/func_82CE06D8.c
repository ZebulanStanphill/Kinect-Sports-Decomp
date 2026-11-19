extern int NetDll_XNetUnregisterInAddr(int caller, unsigned int ina);

int XNetUnregisterInAddr(unsigned int ina)
{
    return NetDll_XNetUnregisterInAddr(1, ina);
}
