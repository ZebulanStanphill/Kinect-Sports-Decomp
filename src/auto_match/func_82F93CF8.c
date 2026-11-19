extern int select(int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout);

int fn_82F93CF8(int ctx, int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout)
{
    return select(nfds, readfds, writefds, exceptfds, timeout);
}
