extern int WSAGetLastError(void);

int fn_82BF2B20(int *socket)
{
    switch (WSAGetLastError()) {
    case 0x2733:
    case 0x2748:
        return 0;
    case 0x2736:
        if (socket != 0)
            *socket = -1;
        return 1;
    case 0x2745:
        return 1;
    case 0x2746:
        return 1;
    }
    return 1;
}
