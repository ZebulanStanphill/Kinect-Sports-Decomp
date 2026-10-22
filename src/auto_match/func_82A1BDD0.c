typedef struct { unsigned int a; unsigned int b; } Msg;
extern int XMsgStartIORequest(unsigned int svc, unsigned int msg, void *ov, void *buf, unsigned int cb);
extern int fn_82A2B798(void);

unsigned int fn_82A1BDD0(unsigned int a, unsigned int b, void *ov)
{
    Msg m;
    int hr;

    m.a = a;
    m.b = b;
    hr = XMsgStartIORequest(0xfb, 0xb0071, ov, &m, 8);
    if (hr < 0) {
        return 0x65b;
    }
    if (ov == 0) {
        hr = fn_82A2B798();
        if (hr < 0) {
            return 0x65b;
        }
        return 0;
    }
    return 0x3e5;
}
