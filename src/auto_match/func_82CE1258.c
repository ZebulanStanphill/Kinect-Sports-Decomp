extern unsigned int XamSessionCreateHandle(unsigned int *phandle);
extern unsigned int XamSessionRefObjByHandle(unsigned int handle, void **pobj);
extern int XMsgStartIORequest(unsigned int app, unsigned int msg, void *overlapped,
                              void *buffer, unsigned int size);
extern int fn_82A2B798(void);
extern void fn_82A1E658(unsigned int handle);

typedef struct {
    void *obj;
    unsigned int flags;
    unsigned int p3;
    unsigned int p4;
    unsigned int p2;
    void *p6;
    void *p5;
} Msg_82CE1258;

unsigned int fn_82CE1258(unsigned int flags, unsigned int p2, unsigned int p3, unsigned int p4,
                         void *p5, void *p6, void *ov, unsigned int *ph)
{
    unsigned int result;
    void *obj;
    Msg_82CE1258 msg;

    if (p2 >= 4 || p6 == 0 || p5 == 0 || ph == 0)
        goto invalid;
    *ph = 0xffffffff;
    if ((flags & 0xFFFFE0C0) != 0)
        goto invalid;
    if ((flags & 8) != 0 && (flags & 0x20) == 0)
        goto invalid;
    if ((flags & 0x10) != 0 && (flags & 4) == 0)
        goto invalid;
    if ((flags & 0x10) != 0 && (flags & 0x20) == 0)
        goto invalid;
    if ((flags & 1) != 0 && (flags & 0x2c) == 0)
        goto invalid;
    if ((flags & 0xf00) != 0) {
        if ((flags & 0xa) == 0)
            goto invalid;
        if ((flags & 2) == 0 && (flags & 8) != 0 && (flags & 0xf00) != (flags & 0x400))
            goto invalid;
        if ((flags & 0x200) != 0 && (flags & 0x800) != 0)
            goto invalid;
    }

    result = XamSessionCreateHandle(ph);
    if (result != 0)
        goto done;
    obj = 0;
    result = XamSessionRefObjByHandle(*ph, &obj);
    if (result != 0)
        goto done;

    msg.flags = flags;
    msg.p2 = p2;
    msg.p4 = p4;
    msg.p3 = p3;
    msg.p6 = p6;
    msg.p5 = p5;
    msg.obj = obj;
    if (XMsgStartIORequest(0xfb, 0xb0010, ov, &msg, sizeof(msg)) < 0) {
        result = 0x65b;
    } else {
        if (ov == 0)
            result = fn_82A2B798() != 0 ? 0x65b : 0;
        else
            result = 0x3e5;
        if (result == 0x3e5 || result == 0)
            goto done;
    }
    fn_82A1E658(*ph);
    *ph = 0;
    goto done;
invalid:
    result = 0x57;
done:
    return result;
}
