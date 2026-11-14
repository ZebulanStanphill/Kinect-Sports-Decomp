typedef struct Obj_822C13B8 {
    char pad[0x7a0];
    int handle;
} Obj_822C13B8;

extern void fn_822BFBD0(Obj_822C13B8 *self);

void fn_822C13B8(Obj_822C13B8 *self)
{
    if (self->handle == 0) {
        fn_822BFBD0(self);
    }
}
