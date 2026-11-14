typedef struct Outer_82F407E0 Outer_82F407E0;

typedef long (*Method_82F407E0)(Outer_82F407E0 *self, unsigned int flags, int *out);

typedef struct Vtbl_82F407E0 {
    Method_82F407E0 slot[5];
} Vtbl_82F407E0;

struct Outer_82F407E0 {
    Vtbl_82F407E0 *vt;      /* -0x1c from the interface */
    int *vbptr;             /* -0x18 */
    int first;              /* -0x14 */
    char pad[0x10];
};

/* The object that owns this interface (the interface sits at +0x1c). */
static __forceinline Outer_82F407E0 *Outer(char *iface)
{
    return (Outer_82F407E0 *)(iface - 0x1c);
}

extern long fn_82EED830(void *self, unsigned int flags, int *out);

long fn_82F407E0(char *self, unsigned int flags, int *out)
{
    int index;

    if (Outer(self)->first < 0)
        return 0x8000ffff;
    if (out == 0)
        return 0x8000ffff;
    index = *out - Outer(self)->first;
    if (index < 0 || index >= 5)
        return fn_82EED830((char *)&Outer(self)->vbptr + Outer(self)->vbptr[2], flags, out);
    switch ((unsigned int)index) {
    case 0:
        return Outer(self)->vt->slot[0](Outer(self), flags, out);
    case 1:
        return Outer(self)->vt->slot[1](Outer(self), flags, out);
    case 2:
        return Outer(self)->vt->slot[2](Outer(self), flags, out);
    case 3:
        return Outer(self)->vt->slot[3](Outer(self), flags, out);
    case 4:
        return Outer(self)->vt->slot[4](Outer(self), flags, out);
    }
    return 0x80004005;
}
