extern int NetDll_XNetInAddrToString(int caller, unsigned int ina, char *buf, int bufSize);

int fn_82CE06C0(unsigned int ina, char *buf, int bufSize)
{
    return NetDll_XNetInAddrToString(1, ina, buf, bufSize);
}
