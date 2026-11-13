// XMsg request 0x2a004 to app 0xfe with a zeroed 0x18-byte block {a (u32), b, c, d} (fn_82A2B288 family).

extern int XMsgStartIORequest(int, int, unsigned __int64, void *, int);

void fn_82A2B3B0(unsigned int a, unsigned __int64 b, unsigned int c, unsigned int d, unsigned __int64 overlapped)
{
    unsigned __int64 data[3];
    int i;

    for (i = 0; i < 3; i++)
        data[i] = 0;
    ((unsigned int *)&data[0])[0] = a;
    data[1] = b;
    ((unsigned int *)&data[2])[0] = c;
    ((unsigned int *)&data[2])[1] = d;
    XMsgStartIORequest(0xfe, 0x2a004, overlapped, data, 0x18);
}
