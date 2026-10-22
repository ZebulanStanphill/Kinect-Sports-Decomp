typedef struct {
    char pad0[0x2c];
    unsigned int count;
    int pad30;
    int size34;
    unsigned char n;
    char flag;
    char pad3a;
    char data[1];
} Hdr;

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
} Entry;

typedef struct {
    char pad0[0x1c];
    Hdr *h;
    char pad20[8];
    char *p28;
    char *p2c;
    Entry *entries;
    char *p34;
    char *p38;
} Obj;

extern void fn_82820EF8(void *p, int n);
void fn_82820970(Obj *o)
{
    Hdr *h = o->h;
    unsigned int i;
    int n = h->n + 3;

    o->p28 = h->data;
    o->p2c = o->p28 + h->n;
    o->entries = (Entry *)(o->p2c + n * 4);
    o->p38 = (char *)(o->entries + h->count);
    o->p34 = o->p38 + h->size34;
    for (i = 0; i < o->h->count; i++) {
        Entry *e = &o->entries[i];
        if (o->h->flag != 1) {
            fn_82820EF8(&e->f4, 4);
            fn_82820EF8(&e->f8, 4);
            fn_82820EF8(&e->fc, 4);
            fn_82820EF8(&e->f10, 4);
            fn_82820EF8(&e->f18, 4);
            fn_82820EF8(&e->f14, 4);
        }
        e->f4 += (int)o->p34;
        e->f18 += (int)o->p38;
    }
}
