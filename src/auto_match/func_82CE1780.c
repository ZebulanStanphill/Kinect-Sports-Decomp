typedef struct {
    void *obj;
    unsigned int arg1;
    unsigned int arg2;
    unsigned int zero1;
    unsigned int zero2;
} IoArgs_82CE1780;

extern unsigned int XamSessionRefObjByHandle(void *handle, void **obj);
extern int XMsgStartIORequest(unsigned int app, unsigned int msg, void *overlapped,
                              void *buffer, unsigned int size);
extern void ObDereferenceObject(void *obj);
extern unsigned int fn_82A2B798(void);

unsigned int fn_82CE1780(void *handle, unsigned int arg1, unsigned int arg2, void *overlapped)
{
    unsigned int result;
    void *obj;
    IoArgs_82CE1780 args;

    result = XamSessionRefObjByHandle(handle, &obj);
    if (result == 0) {
        args.obj = obj;
        args.arg1 = arg1;
        args.arg2 = arg2;
        args.zero1 = 0;
        args.zero2 = 0;
        if (XMsgStartIORequest(0xfb, 0xb0013, overlapped, &args, sizeof(args)) < 0) {
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
