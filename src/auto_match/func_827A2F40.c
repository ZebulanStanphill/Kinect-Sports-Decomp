typedef struct Obj_827A2F40 {
    char pad0[0x30];
    int value; /* 0x30 */
} Obj_827A2F40;

extern void fn_827A2E70(Obj_827A2F40 *self);

void fn_827A2F40(Obj_827A2F40 *self, int value)
{
    self->value = value;
    fn_827A2E70(self);
}
