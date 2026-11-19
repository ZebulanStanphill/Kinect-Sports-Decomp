extern int NetDll_XNetInAddrToXnAddr(int caller, unsigned int ina, void *xnAddr, void *keyId);

int XNetInAddrToXnAddr(unsigned int ina, void *xnAddr, void *keyId)
{
    return NetDll_XNetInAddrToXnAddr(1, ina, xnAddr, keyId);
}
