typedef struct Context_82677160 {
    char pad0[0x24];
    unsigned int flags; /* 0x24 */
    char pad28[0xd8 - 0x28];
    unsigned int hardware; /* 0xd8 */
    char padDC[0x21ec - 0xdc];
    int queue[2]; /* 0x21ec */
} Context_82677160;

typedef struct Object_82677160 {
    void *vt;
    long refs; /* 0x4 */
    char pad8[0x1c - 0x8];
    Context_82677160 *context; /* 0x1c */
    char pad20[0x28 - 0x20];
    void *resource; /* 0x28 */
    char pad2c[0x3c - 0x2c];
    void *resource1; /* 0x3c */
    char pad40[8];
    void *resource2; /* 0x48 */
    char pad4c[8];
    void *resource3; /* 0x54 */
} Object_82677160;

extern long _InterlockedExchangeAdd(long *, long);
extern int fn_8267A5F0(Object_82677160 *self);
extern void fn_8263CBB0(unsigned int hardware, int index, void *resource, unsigned __int64 mask);
extern void fn_82675930(Context_82677160 *context, int index, int a, int b, int c);
extern void fn_82676FA0(int *queue, Object_82677160 **item);
extern void fn_82670230(Object_82677160 *self);

void fn_82677160(Object_82677160 *self, int index, int a, int b, int c)
{
    Object_82677160 *ref;

    if (self->resource == 0) {
        fn_8267A5F0(self);
    }
    fn_8263CBB0(self->context->hardware, 0, self->resource, 0x80000000ULL);
    fn_8263CBB0(self->context->hardware, 1, self->resource1, 0x40000000ULL);
    fn_8263CBB0(self->context->hardware, 2, self->resource2, 0x20000000ULL);
    fn_82675930(self->context, 0, a, b, c);
    fn_82675930(self->context, 1, a, b, c);
    fn_82675930(self->context, 2, a, b, c);
    if (self->resource3 != 0) {
        fn_8263CBB0(self->context->hardware, 3, self->resource3, 0x10000000ULL);
        fn_82675930(self->context, 3, a, b, c);
    }
    if (self->context->flags & 2) {
        _InterlockedExchangeAdd(&self->refs, 1);
        ref = self;
        fn_82676FA0(self->context->queue, &ref);
        fn_82670230(self);
    }
}
