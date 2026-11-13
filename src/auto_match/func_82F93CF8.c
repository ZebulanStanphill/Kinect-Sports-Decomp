extern int fn_82CE09D0(int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout);

int fn_82F93CF8(int ctx, int nfds, void *readfds, void *writefds, void *exceptfds, const void *timeout)
{
    return fn_82CE09D0(nfds, readfds, writefds, exceptfds, timeout);
}
