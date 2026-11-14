struct Info_8307E478 {
    int pad0[2];
    unsigned int pad1 : 1;
    unsigned int kind : 5;
    unsigned int pad2 : 26;
};
struct Elem_8307E478 { struct Info_8307E478 info; char pad[0x34]; struct Info_8307E478 *external; char pad2[0x1c]; };
struct Table_8307E478 { int pad0; unsigned int flags; struct Elem_8307E478 *elems; };

unsigned int fn_8307E478(struct Table_8307E478 *self, int index)
{
    if (self->flags & 0x20000) {
        return self->elems[index].info.kind;
    }
    return self->elems[index].external->kind;
}
