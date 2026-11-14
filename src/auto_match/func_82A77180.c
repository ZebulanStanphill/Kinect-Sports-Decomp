typedef struct Obj_82A77180 { char pad[0x104]; int value; } Obj_82A77180;
extern int fn_82CE4720(Obj_82A77180 *self);

int fn_82A77180(Obj_82A77180 *self, unsigned int which)
{
    if (which == 0) {
        return fn_82CE4720(self);
    }
    return self->value;
}
