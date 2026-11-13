typedef struct Obj_83033048 {
    char pad0[0x24];
    void *buffer;
    unsigned char flags;
} Obj_83033048;
extern void fn_83032F08(Obj_83033048 *self);

void fn_83033048(Obj_83033048 *self)
{
    if ((self->flags & 0x40) != 0 && self->buffer != 0) {
        fn_83032F08(self);
    }
}
