typedef struct Obj_826385B8 { char pad[0x2f00]; int value; char pad2[0x330]; char block[4]; } Obj_826385B8;
extern void fn_82639DB0(Obj_826385B8 *self, void *block);

void fn_826385B8(Obj_826385B8 *self, int value)
{
    self->value = value;
    fn_82639DB0(self, self->block);
}
