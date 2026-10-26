typedef struct Ent { unsigned int key; unsigned char c; unsigned char val; char pad[2]; } Ent;
typedef struct Obj { char pad[0x34]; int base; char pad38[4]; Ent ents[2]; int count; } Obj;

int fn_82CE86F0(Obj *p, unsigned char *k)
{
    int i;
    for (i = 0; i < p->count; i++) {
        if (k[1] == (unsigned char)p->ents[i].key && k[0] == p->ents[i].c) {
            return p->ents[i].val;
        }
    }
    return k[1] + p->base;
}
