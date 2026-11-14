typedef struct Object_82FB4A18 Object_82FB4A18;

typedef struct Holder_82FB4A18 {
    char pad0[0x1c];
    Object_82FB4A18 *object;        /* 0x1c */
    char pad20[0x10];
    unsigned int flags;             /* 0x30 */
    char pad34[0x10];
    unsigned char active;           /* 0x44 */
} Holder_82FB4A18;

extern void fn_82FA9208(Object_82FB4A18 *object);

static __forceinline void ResetObject(Object_82FB4A18 **slot)
{
    Object_82FB4A18 *object = *slot;
    *slot = 0;
    if (object != 0)
        fn_82FA9208(object);
}

void fn_82FB4A18(Holder_82FB4A18 *self)
{
    self->active = 0;
    self->flags &= 0x7fffffff;
    ResetObject(&self->object);
}
