extern long _InterlockedDecrement(long *);

typedef struct Obj_8262BD20 {
    char pad[0xc];
    char *base;
} Obj_8262BD20;

void fn_8262BD20(Obj_8262BD20 *p)
{
    _InterlockedDecrement((long *)(p->base + 0x1dc));
}
