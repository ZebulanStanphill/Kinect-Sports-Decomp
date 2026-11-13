extern unsigned int XMsgStartIORequest(unsigned int service, unsigned int message, void *overlapped, void *buffer, unsigned int size);

void fn_82A2B340(unsigned int value, int index, unsigned int a, unsigned int b, void *overlapped)
{
    unsigned __int64 data[3];
    int i;

    for (i = 0; i < 3; i++)
        data[i] = 0;
    *(unsigned int *)data = value;
    data[1] = (__int64)index;
    ((unsigned int *)data)[4] = a;
    ((unsigned int *)data)[5] = b;
    XMsgStartIORequest(0xfe, 0x2a005, overlapped, data, sizeof(data));
}
