extern int NetDll_listen(int caller, unsigned int s, int backlog);

int fn_82CE09A8(unsigned int s, int backlog)
{
    return NetDll_listen(1, s, backlog);
}
