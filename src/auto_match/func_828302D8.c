typedef struct Obj_828302D8 {
    char pad0[0x28];
    unsigned int count;
    char pad2c[0xbc];
    unsigned char *elems;
    char padec[0x28];
    unsigned char *table;
} Obj_828302D8;

void fn_828302D8(Obj_828302D8 *p)
{
    unsigned int i;
    unsigned char *e;

    e = p->elems;
    for (i = 0; i < p->count; i++) {
        *(int *)(e + 4) = *(int *)(p->table + e[12] * 33 - 20) + *(int *)(e + 4);
        e += 14;
    }
}
