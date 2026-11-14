typedef struct Obj_8304C518 { char pad[0x13c]; short value; } Obj_8304C518;
extern void fn_8304E390(Obj_8304C518 *self);

void fn_8304C518(Obj_8304C518 *self)
{
    self->value = 0;
    fn_8304E390(self);
}
