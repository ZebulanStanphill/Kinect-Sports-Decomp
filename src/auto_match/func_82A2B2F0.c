extern unsigned int XMsgStartIORequest(unsigned int service, unsigned int message, void *overlapped, void *buffer, unsigned int size);

void fn_82A2B2F0(unsigned int value, void *overlapped)
{
    unsigned __int64 data[3];
    int i;

    for (i = 0; i < 3; i++)
        data[i] = 0;
    *(unsigned int *)data = value;
    XMsgStartIORequest(0xfe, 0x2a006, overlapped, data, sizeof(data));
}
