typedef struct Obj_826C3378 {
    int unk0;
    int unk4;
    int unk8;
} Obj_826C3378;

typedef struct Holder_826C3378 {
    int unk0;
    Obj_826C3378 *ptr;
    unsigned char flags;
} Holder_826C3378;

extern int fn_826824B0(Obj_826C3378 *p);

void fn_826C3378(Holder_826C3378 *h, Obj_826C3378 *p, unsigned char owned)
{
    if (h->ptr != 0 && (h->flags & 1) == 0) {
        fn_826824B0(h->ptr);
    }
    h->ptr = p;
    if (owned) {
        h->flags = h->flags | 1;
    } else {
        h->flags = h->flags & 0xfe;
    }
    if (p != 0 && (h->flags & 1) == 0) {
        p->unk8 = (p->unk8 + 1) & 0x8fffffff;
    }
}
