extern int NetDll_XNetQosRelease(int caller, void *qos);

int fn_82CE07C8(void *qos)
{
    return NetDll_XNetQosRelease(1, qos);
}
