typedef struct Self_82A78340 {
    int pad0;
    void *device;           /* 0x4 */
    char pad8[0x38 - 0x8];
    char list[0x40];        /* 0x38 */
    void *resource;         /* 0x78 */
} Self_82A78340;

extern void *fn_82A49BE0(void *desc);
extern void *fn_82A59718(void *device, void *arg);
extern void *fn_82A598F0(void *list, void *item);
extern void fn_82A761A0(void *item);
extern int fn_82A773C0(Self_82A78340 *self, void *arg);
extern int fn_82A77860(Self_82A78340 *self);
extern int fn_82A81840(Self_82A78340 *self, void *arg);

int fn_82A78340(Self_82A78340 *self, void *desc, void *a, void *b, void *arg)
{
    int hr = 0;
    void *item;

    if (a != 0) {
        hr = fn_82A81840(self, a);
        if (hr < 0)
            return hr;
    }
    if (b != 0)
        hr = fn_82A773C0(self, b);
    if (hr < 0)
        return hr;
    self->resource = fn_82A49BE0(desc);
    if (self->resource == 0)
        goto oom;
    item = fn_82A59718(self->device, arg);
    if (fn_82A598F0(self->list, item) == 0)
        goto oom;
    fn_82A761A0(item);
    return fn_82A77860(self);
oom:
    return 0x8007000E;
}
