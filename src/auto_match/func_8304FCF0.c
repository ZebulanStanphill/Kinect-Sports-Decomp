typedef struct Obj_8304FCF0 {
    char pad0[0x74];
    unsigned int pad74 : 3;
    unsigned int active : 1;
    unsigned int locked : 1;
    unsigned int pad74b : 2;
    unsigned int pending : 1;
    unsigned int pad74c : 24;
    char pad78[0xa9 - 0x78];
    unsigned char enabled : 1;
} Obj_8304FCF0;

static __forceinline unsigned char ShouldPend(const Obj_8304FCF0 *self, unsigned char active)
{
    return self->enabled && !active && !self->locked;
}

void fn_8304FCF0(Obj_8304FCF0 *self, unsigned char active)
{
    self->active = active;
    self->pending = ShouldPend(self, active);
}
