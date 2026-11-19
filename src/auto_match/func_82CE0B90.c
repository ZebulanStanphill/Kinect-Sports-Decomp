extern int NetDll_WSAEventSelect(int caller, unsigned int s, void *event, int networkEvents);

int WSAEventSelect(unsigned int s, void *event, int networkEvents)
{
    return NetDll_WSAEventSelect(1, s, event, networkEvents);
}
