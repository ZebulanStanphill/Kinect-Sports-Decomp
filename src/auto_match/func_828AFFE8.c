typedef struct Clock_828AFFE8 {
    char pad0[0x20];
    __int64 offset;                 /* 0x20 */
    __int64 pending;                /* 0x28 */
    __int64 lastTime;               /* 0x30 */
    __int64 time;                   /* 0x38 */
} Clock_828AFFE8;

extern __int64 fn_828AFE88(void);

__int64 fn_828AFFE8(Clock_828AFFE8 *self)
{
    __int64 now = fn_828AFE88();
    __int64 pending = self->pending;

    if (pending != 0) {
        __int64 step = self->lastTime;
        self->lastTime = now;
        step = (now - step) / 2;
        if (step != 0) {
            if (pending > 0) {
                if (step > pending)
                    step = pending;
                self->offset += step;
                self->pending -= step;
            } else {
                if (step > -pending)
                    step = -pending;
                self->pending += step;
                self->offset -= step;
            }
        }
    }
    self->time = self->offset + now;
    return self->time;
}
