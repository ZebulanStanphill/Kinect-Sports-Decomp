extern void *memset(void *destination, int value, unsigned int size);
extern int NtCreateEvent(void **event, int attributes, int type, int state);
extern int NtClose(void *event);
extern unsigned int XamShowMessageBoxUIEx(unsigned int user, unsigned int flags, const void *text,
                                          unsigned int count, const void **buttons, unsigned int focus,
                                          unsigned int mode, const void *title, void *result,
                                          void *overlapped);
extern void fn_82A1E740(void *overlapped, unsigned int *status, int wait);

typedef struct Overlapped_82A1EA78 {
    unsigned int internal;   /* 0x0 */
    unsigned int completion; /* 0x4 */
    unsigned int length;     /* 0x8 */
    void *event;             /* 0xc */
    unsigned int rest[3];    /* 0x10 */
} Overlapped_82A1EA78;

void fn_82A1EA78(const void *text, const void *button, const void *title)
{
    unsigned int status;

    struct {
        unsigned int button;
        unsigned int reserved;
    } result;

    Overlapped_82A1EA78 overlapped;
    overlapped.internal = 0;
    memset(&overlapped.completion, 0, 0x18);
    result.button = 0;
    {
        unsigned int *reserved = &result.reserved;
        memset(reserved, 0, sizeof(*reserved));
    }
    if (NtCreateEvent(&overlapped.event, 0, 1, 0) >= 0) {
        status = XamShowMessageBoxUIEx(0xff, 0, text, 1, &button, 0, 1, title, &result, &overlapped);
        if (status == 0x3e5) {
            fn_82A1E740(&overlapped, &status, 1);
        }
        NtClose(overlapped.event);
    }
}
