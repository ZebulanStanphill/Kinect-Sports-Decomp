typedef struct Obj_82FB6FD8 { char pad[0x34]; unsigned char flag; } Obj_82FB6FD8;
extern void fn_82FAD0C8(Obj_82FB6FD8 *self);

void fn_82FB6FD8(Obj_82FB6FD8 *self)
{
    self->flag = 0;
    fn_82FAD0C8(self);
}
