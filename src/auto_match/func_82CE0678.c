extern int NetDll_XNetXnAddrToInAddr(int caller, const void *xnAddr, const void *keyId, unsigned int *ina);

int fn_82CE0678(const void *xnAddr, const void *keyId, unsigned int *ina)
{
    return NetDll_XNetXnAddrToInAddr(1, xnAddr, keyId, ina);
}
