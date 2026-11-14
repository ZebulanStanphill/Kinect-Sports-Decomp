struct Info_8307DE18 {
    unsigned int pad1 : 10;
    unsigned int mode : 2;
    unsigned int pad2 : 20;
};
struct Elem_8307DE18 { struct Info_8307DE18 info; char pad[0x3c]; struct Info_8307DE18 *external; char pad2[0x1c]; };
struct Table_8307DE18 { int pad0; unsigned int flags; struct Elem_8307DE18 *elems; };

static __forceinline unsigned int GetMode(struct Table_8307DE18 *self, int index)
{
    if (self->flags & 0x20000) {
        return self->elems[index].info.mode;
    }
    return self->elems[index].external->mode;
}

unsigned char fn_8307DE18(struct Table_8307DE18 *self, int index)
{
    return 0 == GetMode(self, index);
}
