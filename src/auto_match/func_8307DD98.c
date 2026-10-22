typedef struct E {
    unsigned int w0;
    char pad4[0x3c];
    unsigned int *p40;
    char pad44[0x10];
    unsigned int k54;
    unsigned int k58;
    char pad5c[4];
} E;
typedef struct S {
    int pad0;
    unsigned int flags;
    E *entries;
} S;

int fn_8307DD98(S *p, int idx, unsigned int key)
{
    E *e = &p->entries[idx];
    unsigned int m;
    if (p->flags & 0x20000) {
        m = e->w0 >> 20 & 3;
    } else {
        m = *e->p40 >> 20 & 3;
    }
    if ((m & 1) && e->k54 == key)
        return 1;
    if ((m & 2) && e->k58 == key)
        return 1;
    return 0;
}
