extern int NetDll_XNetQosRelease(int caller, void *qos);

int XNetQosRelease(void *qos)
{
    return NetDll_XNetQosRelease(1, qos);
}
