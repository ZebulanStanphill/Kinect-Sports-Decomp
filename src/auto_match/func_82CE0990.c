extern int NetDll_connect(int caller, unsigned int s, const void *name, int nameLen);

int fn_82CE0990(unsigned int s, const void *name, int nameLen)
{
    return NetDll_connect(1, s, name, nameLen);
}
