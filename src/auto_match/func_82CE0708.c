extern int NetDll_XNetDnsLookup(int caller, const char *host, void *event, void **dns);

int XNetDnsLookup(const char *host, void *event, void **dns)
{
    return NetDll_XNetDnsLookup(1, host, event, dns);
}
