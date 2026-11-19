extern int NetDll_closesocket(int caller, unsigned int s);

int closesocket(unsigned int s)
{
    return NetDll_closesocket(1, s);
}
