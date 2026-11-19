extern unsigned int WSAWaitForMultipleEvents(unsigned int count, void **events, int waitAll, unsigned int timeout, int alertable);

unsigned int fn_82F94010(int ctx, unsigned int count, void **events, int waitAll, unsigned int timeout, int alertable)
{
    return WSAWaitForMultipleEvents(count, events, waitAll, timeout, alertable);
}
