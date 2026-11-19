/* WSACleanup tail-calls NetDll_WSACleanup. */
extern int WSACleanup(void);

int fn_82F96ED8(void *self)
{
    return WSACleanup();
}
