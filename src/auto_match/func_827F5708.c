typedef struct Obj_827F5708 {
    char pad0[0x24];
    float value;
    float a;
    float b;
    float c;
    char pad34[0xa8];
    unsigned char flags;
} Obj_827F5708;

static __forceinline void SetFlags(unsigned char *flags, unsigned char m) { *flags |= m; }
void fn_827F5708(Obj_827F5708 *self, float value)
{
    self->value = value;
    self->a = 0.0f;
    self->b = 0.0f;
    self->c = 0.0f;
    SetFlags(&self->flags, 0x20);
}
