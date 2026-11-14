typedef struct Obj_82764310 { char pad[0x68]; float value; } Obj_82764310;
extern void fn_82762F38(Obj_82764310 *self, float x, float y);

void fn_82764310(Obj_82764310 *self, float x)
{
    fn_82762F38(self, x, self->value);
}
