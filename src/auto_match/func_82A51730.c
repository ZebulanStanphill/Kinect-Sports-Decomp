typedef struct Context_82A51730 Context_82A51730;

struct Context_82A51730 {
    int (**vtable)(Context_82A51730 *);
    char pad4[0x2c];
    char *device;
    char pad34[8];
    unsigned int format;
    unsigned int flags;
    char pad44[0x34];
    long *resource;
};

extern int fn_82A50190(Context_82A51730 *);
extern long *fn_82A42E20(void *, int, unsigned int, unsigned int, unsigned int);
long _InterlockedIncrement(long *);
long _InterlockedDecrement(long *);

int fn_82A51730(Context_82A51730 *self)
{
    int create = fn_82A50190(self) == 0;
    long *resource;
    unsigned int flags;
    unsigned int format;
    char *device;
    int result;
    unsigned int type;
    if (!create && self->resource) {
        _InterlockedDecrement(self->resource);
        self->resource = 0;
    }
    flags = self->flags;
    format = self->format;
    device = self->device;
    type = self->vtable[27](self);
    self->resource = fn_82A42E20(device + 0x250, create, format, type, flags);
    resource = self->resource;
    result = resource ? 0 : 0x8007000e;
    if (result >= 0 && !create) {
        _InterlockedIncrement(resource);
    }
    return result;
}
