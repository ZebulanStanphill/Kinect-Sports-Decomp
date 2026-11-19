/* Stops or flushes a source voice depending on `mode` and waits until the
 * voice has no queued buffers left; returns the result of the stop or flush
 * call. */
typedef struct VoiceState_82C00AA0 {
    void *currentBufferContext;     /* 0x0 */
    unsigned int buffersQueued;     /* 0x4 */
    unsigned __int64 samplesPlayed; /* 0x8 */
} VoiceState_82C00AA0;

typedef struct Voice_82C00AA0 Voice_82C00AA0;

typedef struct VoiceVtbl_82C00AA0 {
    void *slots00[20];
    int (*Stop)(Voice_82C00AA0 *self, unsigned int flags, unsigned int operationSet); /* 0x50 */
    void *slot54;
    int (*FlushSourceBuffers)(Voice_82C00AA0 *self); /* 0x58 */
    void *slot5C;
    void *slot60;
    void (*GetState)(Voice_82C00AA0 *self, VoiceState_82C00AA0 *state); /* 0x64 */
} VoiceVtbl_82C00AA0;

struct Voice_82C00AA0 {
    VoiceVtbl_82C00AA0 *vtbl;
};

typedef struct Sound_82C00AA0 {
    char pad000[0x38];
    Voice_82C00AA0 *voice; /* 0x038 */
    char pad03C[0x244];
    int pending; /* 0x280 */
    char pad284[0x4];
    int started; /* 0x288 */
} Sound_82C00AA0;

extern void Sleep(unsigned int milliseconds); /* Sleep */

static __forceinline void WaitForBuffers(Sound_82C00AA0 *self, VoiceState_82C00AA0 *state)
{
    self->voice->vtbl->GetState(self->voice, state);
    while (state->buffersQueued != 0) {
        Sleep(10);
        self->voice->vtbl->GetState(self->voice, state);
    }
}

int fn_82C00AA0(Sound_82C00AA0 *self, int mode)
{
    int result;
    VoiceState_82C00AA0 state;

    result = 0;
    if (self->voice == 0) {
        return result;
    }
    if (self->started == 0) {
        if (mode != 3) {
            result = self->voice->vtbl->FlushSourceBuffers(self->voice);
            WaitForBuffers(self, &state);
            self->pending = 0;
        }
    } else {
        if (mode != 2) {
            if (mode != 3) {
                if (mode == 4) {
                    self->voice->vtbl->Stop(self->voice, 0, 0);
                    result = self->voice->vtbl->FlushSourceBuffers(self->voice);
                    WaitForBuffers(self, &state);
                    self->pending = 0;
                    self->started = 0;
                    goto done;
                }
            } else {
                result = self->voice->vtbl->Stop(self->voice, 0, 0);
                self->started = 0;
                goto done;
            }
        }
        WaitForBuffers(self, &state);
        self->pending = 0;
        {
            int *started = &self->started;

            *started = 0;
        }
    done:;
    }
    return result;
}
