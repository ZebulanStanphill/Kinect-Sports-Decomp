typedef struct Ent {
    unsigned short a[3];
    unsigned short id_hi;
    unsigned short b[3];
    unsigned short id_lo;
} Ent;
typedef struct Owner {
    char pad[0x1c];
    Ent *ents;
    int count;
} Owner;
typedef union Key {
    struct { unsigned short hi, lo; } s;
    unsigned int v;
} Key;

void fn_83083900(Owner *o, Key id)
{
    int i;
    Ent *e;
    i = 0;
    if (o->count > 0) {
        e = o->ents;
        do {
            Key k;
            k.s.hi = e->id_hi;
            k.s.lo = e->id_lo;
            if (k.v == id.v) {
                e->b[2] = 0;
                e->b[1] = 0;
                e->b[0] = 0;
                e->a[2] = 0xffff;
                e->a[1] = 0xffff;
                e->a[0] = 0xffff;
                return;
            }
            i++;
            e++;
        } while (i < o->count);
    }
}
