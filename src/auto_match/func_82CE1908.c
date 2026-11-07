typedef struct {
    void *handle;
    unsigned int value;
    unsigned __int64 reserved;
} SessionMsg_82CE1908;

extern unsigned int XamSessionRefObjByHandle(void *hSession, void **ppObj);
extern int XMsgStartIORequest(unsigned int app, unsigned int msg, void *overlapped,
                              void *buffer, unsigned int size);
extern void ObDereferenceObject(void *obj);
extern int fn_82A2B798(void);

unsigned int fn_82CE1908(void *hSession, unsigned int value, void *overlapped)
{
    unsigned int result;
    void *obj;
    SessionMsg_82CE1908 msg;

    result = XamSessionRefObjByHandle(hSession, &obj);
    if (result == 0) {
        msg.handle = obj;
        msg.value = value;
        msg.reserved = 0;
        if (XMsgStartIORequest(0xfb, 0xb0014, overlapped, &msg, 0x10) < 0) {
            result = 0x65b;
        } else if (overlapped == 0) {
            result = fn_82A2B798() ? 0x65b : 0;
        } else {
            result = 0x3e5;
        }
        ObDereferenceObject(obj);
    }
    return result;
}
