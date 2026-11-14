typedef struct Obj_82800EA0 {
    char pad[0xc];
    float value;
} Obj_82800EA0;

void fn_82800EA0(Obj_82800EA0 *self)
{
    if (self->value >= 0.0f) {
        return;
    }
    self->value = -self->value;
}
