typedef struct Object_82FEF488 Object_82FEF488;

typedef struct Vtable_82FEF488 {
    void (*reset)(void *self, int zero, int one);
} Vtable_82FEF488;

struct Object_82FEF488 {
    int pad0;
    Vtable_82FEF488 *vt;
    char pad8[0x70];
    float a;
    int pad7c;
    float b;
    char pad84[0x52];
    unsigned char state;
    char padD7[3];
    unsigned char flags;
};

void fn_82FEF488(Object_82FEF488 *self)
{
    if (!(self->flags & 2)) {
        self->state = 0;
        self->a = -96.3f;
        self->b = -96.3f;
    }
    self->vt->reset(&self->vt, 0, 1);
}
