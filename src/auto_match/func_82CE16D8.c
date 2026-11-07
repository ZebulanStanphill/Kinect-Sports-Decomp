typedef struct {
    void *obj;
    unsigned int arg1;
    unsigned int zero1;
    unsigned int arg2;
    unsigned int zero2;
} IoReq_82CE16D8;

extern unsigned int XamSessionRefObjByHandle(void *handle, void **obj);
extern int XMsgStartIORequest(unsigned int app, unsigned int msg, void *overlapped,
                              void *buf, unsigned int size);
extern void ObDereferenceObject(void *obj);
extern int fn_82A2B798(void);

unsigned int fn_82CE16D8(void *handle, unsigned int arg1, unsigned int arg2, void *overlapped)
{
    unsigned int result;
    void *obj;
    IoReq_82CE16D8 req;

    result = XamSessionRefObjByHandle(handle, &obj);
    if (result == 0) {
        req.obj = obj;
        req.arg1 = arg1;
        req.zero1 = 0;
        req.arg2 = arg2;
        req.zero2 = 0;
        if (XMsgStartIORequest(0xfb, 0xb0013, overlapped, &req, 0x14) < 0) {
            result = 0x65b;
        } else if (overlapped == 0) {
            result = fn_82A2B798() != 0 ? 0x65b : 0;
        } else {
            result = 0x3e5;
        }
        ObDereferenceObject(obj);
    }
    return result;
}
