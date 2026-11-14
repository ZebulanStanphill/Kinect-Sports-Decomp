typedef struct Obj_82764138 { char pad[0x3c]; float value; } Obj_82764138;
extern void fn_82762D30(Obj_82764138 *self, float x, float y);

void fn_82764138(Obj_82764138 *self, float x)
{
    fn_82762D30(self, x, self->value);
}
