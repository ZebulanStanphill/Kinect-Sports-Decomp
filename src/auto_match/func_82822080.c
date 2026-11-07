typedef struct Hdr_82822080 {
    char pad[0x28];
    unsigned int count;
} Hdr_82822080;

typedef struct Obj_82822080 {
    char pad0[0x1c];
    Hdr_82822080 *hdr;
    char pad20[0x10];
    unsigned char *table;
    char pad34[0x10];
    unsigned char *elems;
} Obj_82822080;

void fn_82822080(Obj_82822080 *p)
{
    unsigned int i;
    unsigned char *e;
    unsigned char *t;

    e = p->elems;
    for (i = 0; i < p->hdr->count; i++) {
        t = p->table + e[12] * 33;
        *(int *)(e + 4) = *(int *)(t - 20) + *(int *)(t - 16) + *(int *)(e + 4);
        e += 14;
    }
}
