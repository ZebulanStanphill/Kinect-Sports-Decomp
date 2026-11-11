extern int NetDll_XNetDnsRelease(int caller, void *dns);

int fn_82CE0720(void *dns)
{
    return NetDll_XNetDnsRelease(1, dns);
}
