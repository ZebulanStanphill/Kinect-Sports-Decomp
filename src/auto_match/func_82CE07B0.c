extern int NetDll_XNetQosServiceLookup(int caller, unsigned int flags, void *event, void **qos);

int fn_82CE07B0(unsigned int flags, void *event, void **qos)
{
    return NetDll_XNetQosServiceLookup(1, flags, event, qos);
}
