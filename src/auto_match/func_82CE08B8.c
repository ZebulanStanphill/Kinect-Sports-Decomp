extern unsigned int NetDll_socket(int caller, int af, int type, int protocol);

unsigned int socket(int af, int type, int protocol)
{
    return NetDll_socket(1, af, type, protocol);
}
