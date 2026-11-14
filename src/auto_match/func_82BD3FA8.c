typedef struct Obj_82BD3FA8 {
    char pad0[0x24];
    int mode; /* 0x24 */
} Obj_82BD3FA8;

extern void fn_82BD3C90(Obj_82BD3FA8 *self);
extern void fn_82BD3AD0(Obj_82BD3FA8 *self);

void fn_82BD3FA8(Obj_82BD3FA8 *self)
{
    if (self->mode == 1)
        fn_82BD3C90(self);
    else
        fn_82BD3AD0(self);
}
