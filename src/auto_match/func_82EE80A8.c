typedef struct CriticalSection_82EE80A8 {
    int words[7];
} CriticalSection_82EE80A8;

extern void RtlEnterCriticalSection(CriticalSection_82EE80A8 *cs);
extern void RtlLeaveCriticalSection(CriticalSection_82EE80A8 *cs);
extern unsigned int fn_82A1F2F8(void);

typedef struct Clock_82EE80A8 {
    CriticalSection_82EE80A8 lock;
    int pad1c;
    union {
        unsigned __int64 ticks;
        struct {
            int high;
            unsigned int low;
        } parts;
    } u;
    int pad28[2];
    unsigned __int64 (*source)(void);
} Clock_82EE80A8;

unsigned __int64 fn_82EE80A8(Clock_82EE80A8 *self)
{
    if (self->source != 0) {
        self->u.ticks = self->source();
    } else {
        unsigned int now = fn_82A1F2F8();
        if (now < self->u.parts.low && (int)self->u.parts.low < 0 && (int)now > 0) {
            RtlEnterCriticalSection(&self->lock);
            if ((int)self->u.parts.low < 0) {
                self->u.parts.low = now;
                self->u.parts.high++;
            }
            RtlLeaveCriticalSection(&self->lock);
        }
        self->u.parts.low = now;
    }
    return self->u.ticks;
}
