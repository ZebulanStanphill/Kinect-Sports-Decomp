extern unsigned int NetDll_accept(int caller, unsigned int s, void *addr, int *addrLen);

unsigned int fn_82CE09B8(unsigned int s, void *addr, int *addrLen)
{
    return NetDll_accept(1, s, addr, addrLen);
}
