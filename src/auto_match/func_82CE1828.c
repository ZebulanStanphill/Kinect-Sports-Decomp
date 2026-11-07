typedef struct Msg_82CE1828 {
    void *obj;
    unsigned int arg;
    unsigned __int64 arg64;
    unsigned int timeout;
    unsigned int cb;
    void *buffer;
} Msg_82CE1828;

extern unsigned int XamSessionRefObjByHandle(void *handle, void **obj);
extern int XMsgStartIORequest(unsigned int app, unsigned int msg, void *overlapped,
                              void *buffer, unsigned int size);
extern void ObDereferenceObject(void *obj);
extern unsigned int fn_82A2B798(void);

unsigned int fn_82CE1828(void *handle, unsigned int arg, unsigned __int64 arg64,
                         unsigned int *pcb, void *buffer, void *overlapped)
{
    unsigned int result;
    void *obj;
    Msg_82CE1828 msg;

    if (buffer == 0 || *pcb < 0xe08) {
        result = 0x7a;
        *pcb = 0xe08;
    } else {
        result = XamSessionRefObjByHandle(handle, &obj);
        if (result == 0) {
            msg.obj = obj;
            msg.arg = arg;
            msg.arg64 = arg64;
            msg.timeout = 300;
            msg.cb = *pcb;
            msg.buffer = buffer;
            if (XMsgStartIORequest(0xfb, 0xb001a, overlapped, &msg, 0x20) < 0) {
                result = 0x65b;
            } else if (overlapped == 0) {
                result = fn_82A2B798() ? 0x65b : 0;
            } else {
                result = 0x3e5;
            }
            ObDereferenceObject(obj);
        }
    }
    return result;
}
