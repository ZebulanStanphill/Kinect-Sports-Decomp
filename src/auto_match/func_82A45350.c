typedef struct Desc_82A45350 {
    unsigned int first : 5;
    unsigned int count : 5;
    unsigned int pad0 : 22;
    unsigned int wrapped : 1;
    unsigned int pad1 : 1;
    unsigned int halved : 1;
    unsigned int pad2 : 29;
    int pad8[7];
    unsigned int pad3 : 27;
    unsigned int base : 5;
} Desc_82A45350;

typedef struct Elem_82A45350 {
    Desc_82A45350 desc;
    char pad28[0x18];
    Desc_82A45350 *external;
    char pad44[0xe];
    unsigned short offset;
    char pad54[0xc];
} Elem_82A45350;

typedef struct Table_82A45350 {
    int pad0;
    unsigned int flags;
    Elem_82A45350 *elems;
} Table_82A45350;

unsigned int fn_82A45350(Table_82A45350 *self, int index)
{
    Elem_82A45350 *e;
    Desc_82A45350 *d;
    unsigned int v;

    if (self->flags & 0x20000)
        d = &self->elems[index].desc;
    else
        d = self->elems[index].external;
    e = &self->elems[index];
    if (d->wrapped) {
        if (d->first >= d->base)
            v = d->first - d->base;
        else
            v = d->count - d->base + d->first;
    } else {
        v = d->count;
    }
    return ((v << 8) - e->offset) >> (d->halved + 1);
}
