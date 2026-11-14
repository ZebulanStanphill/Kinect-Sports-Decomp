typedef struct Object_8302E0C0 {
    char pad0[0x11f];
    unsigned char b7 : 1;
    unsigned char b6 : 1;
    unsigned char b5 : 1;
    unsigned char b4 : 1;
    unsigned char b3 : 1;
    unsigned char b2 : 1;
    unsigned char b1 : 1;
    unsigned char b0 : 1;
} Object_8302E0C0;

extern void fn_8302D408(Object_8302E0C0 *self);

void fn_8302E0C0(Object_8302E0C0 *self, unsigned char value)
{
    if (self->b3 == value)
        return;
    self->b3 = value;
    fn_8302D408(self);
}
