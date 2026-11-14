typedef struct Context_82677098 {
    char pad0[0x24];
    unsigned int flags;         /* 0x24 */
    char pad28[0xd8 - 0x28];
    unsigned int hardware;      /* 0xd8 */
    char padDC[0x21ec - 0xdc];
    int queue[2];               /* 0x21ec */
} Context_82677098;

typedef struct Object_82677098 {
    void *vt;
    long refs;                  /* 0x4 */
    char pad8[0x1c - 0x8];
    Context_82677098 *context;  /* 0x1c */
    char pad20[0x28 - 0x20];
    void *resource;             /* 0x28 */
} Object_82677098;

extern long _InterlockedExchangeAdd(long *, long);
extern int fn_8267A5F0(Object_82677098 *self);
extern void fn_8263CBB0(unsigned int hardware, int index, void *resource, unsigned __int64 mask);
extern void fn_82675930(Context_82677098 *context, int index, int a, int b, int c);
extern void fn_82676FA0(int *queue, Object_82677098 **item);
extern void fn_82670230(Object_82677098 *self);

void fn_82677098(Object_82677098 *self, int index, int a, int b, int c)
{
    Object_82677098 *ref;

    if (self->resource == 0) {
        fn_8267A5F0(self);
    }
    fn_8263CBB0(self->context->hardware, index, self->resource,
                0x8000000000000000ULL >> (unsigned int)(index + 32));
    fn_82675930(self->context, index, a, b, c);
    if (self->context->flags & 2) {
        _InterlockedExchangeAdd(&self->refs, 1);
        ref = self;
        fn_82676FA0(self->context->queue, &ref);
        fn_82670230(self);
    }
}
