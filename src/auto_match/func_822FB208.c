typedef struct Obj_822FB208 {
    char pad[0x88];
    void *target;
} Obj_822FB208;

extern void fn_822FB2C8(Obj_822FB208 *self);
extern void fn_822FB3B8(Obj_822FB208 *self);

void fn_822FB208(Obj_822FB208 *self)
{
    if (self->target != 0) {
        fn_822FB2C8(self);
    } else {
        fn_822FB3B8(self);
    }
}
