/* fn_82CE0BB0 tail-calls NetDll_WSAGetLastError. */
extern int fn_82CE0BB0(void);

int fn_82F93DE0(void *self)
{
    return fn_82CE0BB0();
}
