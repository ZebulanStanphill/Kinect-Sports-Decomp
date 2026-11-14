typedef struct Child_823D1670 {
    char pad0[0x3c];
    int active;
    char pad40[0x8];
    int count;
} Child_823D1670;

typedef struct Obj_823D1670 {
    char pad0[0x94];
    Child_823D1670 *child;
    char pad98[0xe70 - 0x98];
    int pending;
    int pade74;
    unsigned int value;
    int dirty;
} Obj_823D1670;

extern void fn_82359698(Obj_823D1670 *self, int state);

void fn_823D1670(Obj_823D1670 *self, unsigned int value)
{
    Child_823D1670 *child = self->child;
    self->dirty = 1;
    if (child != 0) {
        child->active = 1;
        child->count = 0;
    }
    self->value = value;
    self->pending = 1;
    fn_82359698(self, 0x14);
}
