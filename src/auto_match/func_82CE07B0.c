extern int NetDll_XNetQosServiceLookup(int caller, unsigned int flags, void *event, void **qos);

int XNetQosServiceLookup(unsigned int flags, void *event, void **qos)
{
    return NetDll_XNetQosServiceLookup(1, flags, event, qos);
}
