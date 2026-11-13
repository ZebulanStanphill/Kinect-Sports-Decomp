typedef struct Obj_82EE91C0 {
    char pad0[0x4c];
    int closed;
    char lock[0x1c];
    void *buffer;
    void *handle;
} Obj_82EE91C0;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_8306C5D0(void *src, void *handle, int flags, void *buffer);
extern int fn_82A1F470(void);

int fn_82EE91C0(Obj_82EE91C0 *self, void *src)
{
    int hr = 0;
    RtlEnterCriticalSection(self->lock);
    if (self->closed != 0) {
        hr = 0x8000FFFF;
    } else if (fn_8306C5D0(src, self->handle, 0, self->buffer) == 0) {
        int err = fn_82A1F470();
        hr = err <= 0 ? err : (err & 0xffff) | 0x80070000;
    }
    RtlLeaveCriticalSection(self->lock);
    return hr;
}
