extern int NetDll_XNetDnsRelease(int caller, void *dns);

int XNetDnsRelease(void *dns)
{
    return NetDll_XNetDnsRelease(1, dns);
}
