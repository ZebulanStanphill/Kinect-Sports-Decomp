typedef struct Entry {
    char pad00[0x10];
    char f10[0x10];
    unsigned int base;
    char pad24[0xc];
    short prev;
    short next;
    char pad34[2];
    unsigned char flags;
    char pad37[5];
    int offset;
} Entry;

typedef struct Obj {
    char pad00[0x7c];
    Entry *entries;
    char pad80[4];
    char f84[4];
    char f88[0x50];
    char fd8[0x30];
    short head;
} Obj;

extern void fn_8281A000(Obj *o, short *idx, int p3, unsigned short align, int size);
extern void fn_82819398(Entry *e, void *list, short idx);
extern void fn_82822E38(void *p);
extern void fn_82822F60(void *list, Entry *e, void (*cb)(void), int p4);
extern void fn_828233A0(void *p);
extern void fn_82819260(void);

int fn_8281ACA8(Obj *o, short *idx, int p3, unsigned short align, int a, int b)
{
    Entry *e;
    short i;
    int off;

    fn_8281A000(o, idx, p3, align, a + b);
    e = o->entries;
    fn_82819398(e, o->f84, *idx);
    fn_82822E38(&e[*idx]);
    fn_82822E38(e[*idx].f10);
    fn_828233A0(o->fd8);
    i = *idx;
    if (o->head != -1) {
        e[o->head].next = i;
    }
    e[i].prev = o->head;
    e[i].next = -1;
    o->head = i;
    fn_82822F60(o->f88, &e[*idx], fn_82819260, 0);
    off = ((e[*idx].base + align + a + b - 1) & ~(align - 1)) - b;
    e[*idx].offset = off;
    e[*idx].flags |= 1;
    return off - a;
}
