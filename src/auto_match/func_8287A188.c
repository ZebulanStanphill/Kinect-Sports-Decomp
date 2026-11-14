typedef struct Obj_8287A188 { char pad[4]; float value; char pad2[0x24]; float delta; } Obj_8287A188;

void fn_8287A188(Obj_8287A188 *self, float value)
{
    self->delta = value - self->value;
    self->value = value;
}
