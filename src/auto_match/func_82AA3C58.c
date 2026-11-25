typedef void (*ReportFunc_82AA3C58)(void *context, int severity, int code, const char *message);

typedef struct Stream_82AA3C58 {
    void *context;              /* 0x00 */
    ReportFunc_82AA3C58 report; /* 0x04 */
    unsigned short length;      /* 0x08 */
    unsigned short pad0a;       /* 0x0a */
    int code;                   /* 0x0c */
    char text[0x200];           /* 0x10 */
} Stream_82AA3C58;

extern void *fn_8265C940(unsigned int size, unsigned int attributes);
extern void fn_8265C990(void *p, unsigned int attributes);
extern int fn_82AA3B58(unsigned int *code, unsigned int size, void *param_3, void *param_4, void *param_5,
                       void *param_6, void *context, ReportFunc_82AA3C58 report, void *param_9,
                       void *param_10);
extern void fn_82631D60(void *dest, void *src, unsigned int size);
extern int fn_82D7E470(void *device, unsigned int size, int shift, int a4, void *callback, void *context);
extern int fn_82AA5540(void *device, unsigned int size, int a3, void *callback, void *context, int a6,
                       int a7);
extern int fn_82AA1BA8(Stream_82AA3C58 *s);
extern void fn_82AA0550(void);
extern void fn_82AA1C88(void);

int fn_82AA3C58(unsigned int *code, unsigned int size, void *dest, unsigned int bufferSize,
                unsigned int *outSize, unsigned int flags, void *context, ReportFunc_82AA3C58 report,
                void *param_9, void *param_10, unsigned int param_11)
{
    void *buffer;
    int hr;
    int found;
    int shift;
    Stream_82AA3C58 stream;

    buffer = fn_8265C940(bufferSize, 0x24870000);
    if (buffer == 0) {
        return (int)0x8007000e;
    }
    hr = fn_82AA3B58(code, size, buffer, (void *)bufferSize, outSize, (void *)flags, context, report, param_9,
                     param_10);
    if (hr >= 0) {
        fn_82631D60(dest, buffer, *outSize);
    }
    fn_8265C990(buffer, 0x24870000);
    if (hr >= 0 && (flags & 0x10) == 0) {
        found = 0;
        shift = (param_11 & 0x7f) << 10;
        hr = fn_82D7E470(dest, *outSize, shift, 0, fn_82AA0550, &found);
        if (hr < 0 || found != 0) {
            stream.context = context;
            stream.report = report;
            stream.code = hr < 0;
            stream.length = 0;
            if (hr < 0) {
                report(context, stream.code, (stream.code == 0) + 0x1bbd,
                       "Validation failed. Validator output follows:");
            } else {
                report(context, stream.code, (stream.code == 0) + 0x1bbd,
                       "Validation succeeded. Validator warnings follow:");
            }
            fn_82D7E470(dest, *outSize, shift, 0, fn_82AA1C88, &stream);
            if (stream.length != 0) {
                fn_82AA1BA8(&stream);
            }
            fn_82AA5540(dest, *outSize, 0x44, fn_82AA1C88, &stream, 0, 0);
            if (stream.length != 0) {
                fn_82AA1BA8(&stream);
            }
        }
    }
    return hr;
}
