typedef struct Object_8302E108 {
    char pad0[0x11e];
    unsigned char mode : 4;
    unsigned char kind : 2;
    unsigned char pad : 2;
} Object_8302E108;

extern void fn_8302D408(Object_8302E108 *self);

void fn_8302E108(Object_8302E108 *self, int kind)
{
    if (self->kind == kind)
        return;
    self->kind = kind;
    fn_8302D408(self);
}
