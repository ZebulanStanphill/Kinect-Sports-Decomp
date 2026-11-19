extern int NetDll_XNetServerToInAddr(int caller, unsigned int ina, unsigned int serviceId, unsigned int *inaOut);

int XNetServerToInAddr(unsigned int ina, unsigned int serviceId, unsigned int *inaOut)
{
    return NetDll_XNetServerToInAddr(1, ina, serviceId, inaOut);
}
