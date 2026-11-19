extern int NetDll_XNetXnAddrToInAddr(int caller, const void *xnAddr, const void *keyId, unsigned int *ina);

int XNetXnAddrToInAddr(const void *xnAddr, const void *keyId, unsigned int *ina)
{
    return NetDll_XNetXnAddrToInAddr(1, xnAddr, keyId, ina);
}
