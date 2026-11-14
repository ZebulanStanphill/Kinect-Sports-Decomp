typedef struct Device_824742B0 {
    char pad0[0x10];
    unsigned __int64 dirty;         /* 0x10 */
    char pad18[0x28dc - 0x18];
    struct { unsigned hi : 28; unsigned lo : 4; } state28dc;       /* 0x28dc */
    char pad28e0[0x2efc - 0x28e0];
    unsigned int bits2efc;          /* 0x2efc */
    char pad2f00[0x2f04 - 0x2f00];
    unsigned int mode;              /* 0x2f04 */
    char pad2f08[0x3148 - 0x2f08];
    unsigned int enabled;                  /* 0x3148 */
} Device_824742B0;

typedef struct Ctx_824742B0 {
    Device_824742B0 *device;
} Ctx_824742B0;

typedef struct Obj_824742B0 {
    char pad0[0x88];
    void *item;     /* 0x88 */
    int active;     /* 0x8c */
} Obj_824742B0;

extern void fn_82637B30(Device_824742B0 *d, int enable);
extern void fn_825551A8(void *item);

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_824742B0(Obj_824742B0 *self, Ctx_824742B0 **ctx)
{
    Device_824742B0 *d;
    unsigned int old;
    unsigned int top;

    if (self->active != 0 && self->item != 0) {
        d = (*ctx)->device;
        old = d->mode;
        {
            unsigned int *mode = &d->mode;
            *mode = 7;
        }
        d->state28dc.lo = d->enabled ? 7 : 0;
        SetDirty(&d->dirty, 0x2000000000);
        top = d->bits2efc >> 31;
        fn_82637B30(d, 0);
        fn_825551A8(self->item);
        {
            unsigned int *mode = &d->mode;
            *mode = old;
        }
        d->state28dc.lo = d->enabled ? old : 0;
        SetDirty(&d->dirty, 0x2000000000);
        fn_82637B30(d, top);
    }
}
