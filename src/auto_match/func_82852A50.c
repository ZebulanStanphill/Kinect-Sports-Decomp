typedef struct Entry_82852A50 {
    unsigned int first;
    void *ptr;
    int pad[2];
} Entry_82852A50;

typedef struct Sub_82852A50 {
    unsigned char *idx;
    Entry_82852A50 *entries;
    unsigned short count;
    short pad;
    int padc;
    unsigned int x10;
} Sub_82852A50;

typedef struct Param_82852A50 {
    int pad;
    Sub_82852A50 s;
} Param_82852A50;

typedef struct Obj_82852A50 {
    int pad;
    unsigned int h;
} Obj_82852A50;

extern int fn_82631920(unsigned int a, unsigned int b);
extern int fn_82639F78(unsigned int a, int i, void *ptr, int z, unsigned int first,
                       unsigned __int64 mask);

void fn_82852A50(Obj_82852A50 *o, Param_82852A50 *p)
{
    Sub_82852A50 *s = &p->s;
    int i;

    for (i = 0; i < s->count; i++) {
        Entry_82852A50 *e = &s->entries[s->idx[i]];
        if (e->ptr != 0) {
            unsigned int sh = ((unsigned int)((0x5f - i) * 0x5556) >> 16) + 32;
            fn_82639F78(o->h, i, e->ptr, 0, e->first, 0x8000000000000000ULL >> sh);
        }
    }
    fn_82631920(o->h, s->x10);
}
