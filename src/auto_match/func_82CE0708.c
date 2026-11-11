extern int NetDll_XNetDnsLookup(int caller, const char *host, void *event, void **dns);

int fn_82CE0708(const char *host, void *event, void **dns)
{
    return NetDll_XNetDnsLookup(1, host, event, dns);
}
