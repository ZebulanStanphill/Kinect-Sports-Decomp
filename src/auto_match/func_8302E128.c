typedef struct Object_8302E128 {
    char pad0[0x11c];
    unsigned short state;
} Object_8302E128;

extern void fn_8302D408(Object_8302E128 *self);

void fn_8302E128(Object_8302E128 *self, unsigned short state)
{
    if (self->state == state)
        return;
    self->state = state;
    fn_8302D408(self);
}
