extern int NetDll_XNetUnregisterInAddr(int caller, unsigned int ina);

int fn_82CE06D8(unsigned int ina)
{
    return NetDll_XNetUnregisterInAddr(1, ina);
}
