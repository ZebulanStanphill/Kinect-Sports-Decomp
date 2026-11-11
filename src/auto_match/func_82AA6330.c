extern void fn_82F6C420(void *p, int n);

typedef struct Obj_82AA6330 {
    char pad0[0x28];
    unsigned int flags;
    char pad2c[0x470 - 0x2c];
    char sub[1];
} Obj_82AA6330;

void fn_82AA6330(Obj_82AA6330 *self)
{
    self->flags |= 0x10000000;
    fn_82F6C420(self->sub, 1);
}
