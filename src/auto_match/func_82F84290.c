typedef struct Exception_82F84290 {
    unsigned int code;
    unsigned int flags;
    void *nested;
    void *address;
} Exception_82F84290;

extern Exception_82F84290 lbl_832636E8;
extern int lbl_83263738;
extern unsigned int lbl_831BB8F0;
extern unsigned int lbl_831BB8F4;
extern char lbl_83263740[];
extern char lbl_8216AAF8[];
extern void RtlCaptureContext(void *context);
extern unsigned int fn_82A1E4F0(unsigned int mode);
extern void fn_82F70520(int mode);
extern long UnhandledExceptionFilter(void *exception);
extern void KeBugCheck(unsigned int code);
extern void *_ReturnAddress(void);

void fn_82F84290(unsigned __int64 code)
{
    unsigned int cookie[2];

    RtlCaptureContext(lbl_83263740);
    lbl_832636E8.address = _ReturnAddress();
    lbl_832636E8.code = 0xc0000409;
    lbl_832636E8.flags = 1;
    /* Keep copies in the crash frame for diagnostics. */
    cookie[0] = lbl_831BB8F0;
    cookie[1] = lbl_831BB8F4;
    lbl_83263738 = 0;
    fn_82F70520(1);
    fn_82A1E4F0(0);
    UnhandledExceptionFilter(lbl_8216AAF8);
    if (lbl_83263738 == 0)
        fn_82F70520(1);
    KeBugCheck(0xf2);
}
