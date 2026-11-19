/* WSACreateEvent tail-calls NetDll_WSACreateEvent. */
extern void * WSACreateEvent(void);

void * fn_82F93DB8(void *self)
{
    return WSACreateEvent();
}
