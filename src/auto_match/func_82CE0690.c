extern int NetDll_XNetServerToInAddr(int caller, unsigned int ina, unsigned int serviceId, unsigned int *inaOut);

int fn_82CE0690(unsigned int ina, unsigned int serviceId, unsigned int *inaOut)
{
    return NetDll_XNetServerToInAddr(1, ina, serviceId, inaOut);
}
