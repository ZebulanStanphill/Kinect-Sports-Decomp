/* WSAGetLastError tail-calls NetDll_WSAGetLastError. */
extern int WSAGetLastError(void);

int fn_82F93DE0(void *self)
{
    return WSAGetLastError();
}
