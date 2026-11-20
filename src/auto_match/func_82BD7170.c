long _InterlockedExchange(long volatile *target, long value);

typedef struct Format_82BD7170 {
    unsigned char bytes[0x36];
} Format_82BD7170;

typedef struct Voice_82BD7170 {
    int port;     /* 0x0 */
    int state;    /* 0x4 */
    void *engine; /* 0x8 */
    void *voice;  /* 0xc */
    char pad10[0x54 - 0x10];
    long busy; /* 0x54 */
    char pad58[0x60 - 0x58];
    Format_82BD7170 format; /* 0x60 */
    char pad96[0x9c - 0x96];
    void *queue; /* 0x9c */
    char pada0[0xd0 - 0xa0];
    int flags; /* 0xd0 */
} Voice_82BD7170;

extern const Format_82BD7170 lbl_820E8748;

extern void fn_82BD6990(Voice_82BD7170 *self);
extern long XamVoiceCreate(int port, unsigned int flags, void **voice);
extern void XamVoiceClose(void *voice);
extern long fn_82BDC780(void *engine, int port);
extern void fn_82BD6260(void *queue);

long fn_82BD7170(Voice_82BD7170 *self, int port)
{
    long hr;

    fn_82BD6990(self);
    hr = XamVoiceCreate(port, 0xf, &self->voice);
    if (hr >= 0) {
        hr = fn_82BDC780(self->engine, port);
        self->port = port;
        self->state = 0;
        fn_82BD6260(self->queue);
        self->flags = 0x26404;
        _InterlockedExchange(&self->busy, 1);
        self->format = lbl_820E8748;
        if (hr >= 0) {
            return hr;
        }
    }
    if (self->voice != 0) {
        XamVoiceClose(self->voice);
        self->voice = 0;
    }
    return hr;
}
