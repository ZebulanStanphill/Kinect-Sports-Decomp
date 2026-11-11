extern int NetDll_XNetInAddrToXnAddr(int caller, unsigned int ina, void *xnAddr, void *keyId);

int fn_82CE06A8(unsigned int ina, void *xnAddr, void *keyId)
{
    return NetDll_XNetInAddrToXnAddr(1, ina, xnAddr, keyId);
}
