typedef struct {
    unsigned char bits0 : 2;
    unsigned char flag : 1;
    unsigned char bits3 : 5;
} Flags_827F5978;

typedef struct {
    unsigned char pad[0x20];
    unsigned short a;
    unsigned short b;
    float x;
    float y;
    float z;
    float w;
    unsigned char pad34[0xdc - 0x34];
    Flags_827F5978 flags;
} Obj_827F5978;

void fn_827F5978(Obj_827F5978 *self, const Obj_827F5978 *other)
{
    self->a = other->a;
    self->b = other->b;
    self->x = other->x;
    self->y = other->y;
    self->z = other->z;
    self->w = other->w;
    {
        Flags_827F5978 *f = &self->flags;
        f->flag = other->flags.flag;
    }
}
