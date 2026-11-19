__int64 _InterlockedIncrement64(__int64 volatile *value);

typedef struct WaitBlock_82A5D3A8 {
    unsigned char data[0x18];
} WaitBlock_82A5D3A8;

typedef struct Driver_82A5D3A8 {
    char pad0[0x18];
    float *samples;        /* 0x18 */
    int pad1c;             /* 0x1c */
    void *renderDriver;    /* 0x20 */
    int pad24;             /* 0x24 */
    void *readyEvent;      /* 0x28 */
    void *frameEvent;      /* 0x2c */
    void *quitEvent;       /* 0x30 */
    int pad34;             /* 0x34 */
    __int64 pendingFrames; /* 0x38 */
} Driver_82A5D3A8;

extern int KeSetEvent(void *event, int increment, unsigned char wait);
extern unsigned int KeWaitForMultipleObjects(unsigned int count, void **objects, int waitType, int waitReason,
                                             int waitMode, unsigned char alertable, __int64 *timeout,
                                             WaitBlock_82A5D3A8 *waitBlocks);
extern void fn_82A5D160(Driver_82A5D3A8 *self, float (*channels)[256]);
extern int XAudioSubmitRenderDriverFrame(void *driver, float (*channels)[256]);

void fn_82A5D3A8(Driver_82A5D3A8 *self)
{
    void *handles[2];
    void *objects[64];
    WaitBlock_82A5D3A8 waitBlocks[64];
    float channels[6][256];
    float *src;
    int frame;
    int channel;
    int i;

    if (self->pendingFrames > 0) {
        KeSetEvent(self->readyEvent, 1, 0);
    }
    handles[0] = self->quitEvent;
    handles[1] = self->frameEvent;
    for (i = 0; i < 2; i++) {
        objects[i] = handles[i];
    }
    if (KeWaitForMultipleObjects(2, objects, 1, 3, 1, 0, 0, waitBlocks) == 1) {
        src = self->samples;
        for (frame = 0; frame < 256; frame++) {
            for (channel = 0; channel < 6; channel++) {
                channels[channel][frame] = src[channel];
            }
            src += 6;
        }
        fn_82A5D160(self, channels);
        XAudioSubmitRenderDriverFrame(self->renderDriver, channels);
        _InterlockedIncrement64(&self->pendingFrames);
    }
}
