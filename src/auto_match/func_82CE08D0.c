extern int NetDll_closesocket(int caller, unsigned int s);

int fn_82CE08D0(unsigned int s)
{
    return NetDll_closesocket(1, s);
}
