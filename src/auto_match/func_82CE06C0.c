extern int NetDll_XNetInAddrToString(int caller, unsigned int ina, char *buf, int bufSize);

int XNetInAddrToString(unsigned int ina, char *buf, int bufSize)
{
    return NetDll_XNetInAddrToString(1, ina, buf, bufSize);
}
