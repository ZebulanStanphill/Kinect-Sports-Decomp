// Kinect Sports retail 4D5308C9, function 0x82A2B288 (100 bytes).
// XMsg request 0x2a007 to app 0xfe with a zeroed 0x18-byte block {a, b, c, d} (fn_82A2B1C8 family).

extern int XMsgStartIORequest(int, int, unsigned __int64, void *, int);

void fn_82A2B288(unsigned __int64 a, unsigned __int64 b, unsigned int c, unsigned int d, unsigned __int64 overlapped)
{
    unsigned __int64 data[3];
    int i;

    for (i = 0; i < 3; i++)
        data[i] = 0;
    data[0] = a;
    data[1] = b;
    ((unsigned int *)&data[2])[0] = c;
    ((unsigned int *)&data[2])[1] = d;
    XMsgStartIORequest(0xfe, 0x2a007, overlapped, data, 0x18);
}
