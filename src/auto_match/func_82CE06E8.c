extern int NetDll_XNetConnect(int caller, unsigned int ina);

int XNetConnect(unsigned int ina)
{
    return NetDll_XNetConnect(1, ina);
}
