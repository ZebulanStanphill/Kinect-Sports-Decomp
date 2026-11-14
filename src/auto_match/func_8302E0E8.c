typedef struct Object_8302E0E8 {
    char pad0[0x11e];
    unsigned char mode : 4;
    unsigned char kind : 2;
    unsigned char pad : 2;
} Object_8302E0E8;

extern void fn_8302D408(Object_8302E0E8 *self);

void fn_8302E0E8(Object_8302E0E8 *self, int mode)
{
    if (self->mode == mode)
        return;
    self->mode = mode;
    fn_8302D408(self);
}
