extern int NetDll_shutdown(int caller, unsigned int s, int how);

int shutdown(unsigned int s, int how)
{
    return NetDll_shutdown(1, s, how);
}
