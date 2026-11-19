extern int NetDll_getpeername(int caller, unsigned int s, void *name, int *nameLen);

int getpeername(unsigned int s, void *name, int *nameLen)
{
    return NetDll_getpeername(1, s, name, nameLen);
}
