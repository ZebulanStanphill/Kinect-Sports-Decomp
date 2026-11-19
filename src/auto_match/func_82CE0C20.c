typedef struct MessageArg_82CE0C20 {
    int type;      /* 0x0 */
    int pad4;      /* 0x4 */
    __int64 value; /* 0x8 */
} MessageArg_82CE0C20;

typedef struct MessageArgs_82CE0C20 {
    MessageArg_82CE0C20 args[32]; /* 0x0 */
    int count;                    /* 0x200 */
} MessageArgs_82CE0C20;

extern int fn_82CE1EA8(unsigned int id, unsigned int *handle);
extern int fn_82CE1F30(unsigned int handle, int a, int b, int c, unsigned int *size, int d, int e);
extern int fn_82CE2008(unsigned int id, unsigned int handle, int a, int b, void *buffer, unsigned int size,
                       int c, int d, int e, unsigned int *outA, unsigned int *outB, int f, unsigned int *app);
extern int XamAlloc(unsigned int flags, unsigned int size, void **buffer);
extern void XamFree(void *buffer);
extern int XMsgInProcessCall(unsigned int app, unsigned int message, unsigned int param1, void *param2);
extern int fn_82CE0BF0(MessageArgs_82CE0C20 *args, int value);
extern void fn_82A2A370(int error);

int fn_82CE0C20(unsigned int first, unsigned int second, unsigned int third, int fourth, int fifth)
{
    MessageArgs_82CE0C20 args;
    void *buffer;
    unsigned int size;
    unsigned int handle;
    unsigned int app;
    unsigned int outA;
    unsigned int outB;
    int hr;
    int result;

    result = 0;
    args.count = 0;
    buffer = 0;
    size = 0;
    hr = fn_82CE1EA8(0x206, &handle);
    if (hr >= 0) {
        hr = fn_82CE1F30(handle, 0, 0, 0, &size, 0, 0);
        if (hr >= 0) {
            hr = XamAlloc(0, size, &buffer);
            if (hr >= 0) {
                hr = fn_82CE2008(0x206, handle, 0, 0, buffer, size, 0, 0, 0, &outA, &outB, 0, &app);
                if (hr >= 0) {
                    fn_82CE0BF0(&args, (int)&first);
                    fn_82CE0BF0(&args, (int)&second);
                    fn_82CE0BF0(&args, (int)&third);
                    fn_82CE0BF0(&args, fourth);
                    fn_82CE0BF0(&args, fifth);
                    hr = XMsgInProcessCall(0xfc, 0x58020, app, &args);
                }
            }
        }
    }
    if (hr < 0) {
        if (buffer != 0) {
            XamFree(buffer);
        }
        fn_82A2A370(hr);
        result = 0x65b;
    } else {
        XamFree(buffer);
    }
    return result;
}
