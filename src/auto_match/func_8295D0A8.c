typedef struct Entry {
    int a;
    int b;
    int c[4];
} Entry;

typedef struct Obj {
    char pad0[0xcc];
    unsigned int flags;
    char padd0[0x108 - 0xd0];
    int v108;
    char pad10c[0x114 - 0x10c];
    int v114;
    char pad118[0x11c - 0x118];
    int v11c;
    char pad120[0x128 - 0x120];
    Entry *entries;
    unsigned int count;
    unsigned int cap;
} Obj;

extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_8295A330(Obj *o, int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

int fn_8295D0A8(Obj *o, int a)
{
    int i;

    if ((o->flags & 1) != 0 && o->entries != 0) {
        if (o->count >= o->cap) {
            unsigned int sz = o->cap * 0x30;
            Entry *n = fn_8265C940(sz, 0x24810000);
            if (n == 0) {
                return 0x8007000e;
            }
            memcpy(n, o->entries, o->count * 0x18);
            fn_8265C990(o->entries, 0x24810000);
            o->entries = n;
            o->cap = o->cap << 1;
        }
        o->entries[o->count].a = o->v108;
        o->entries[o->count].b = o->v114 << 2;
        for (i = 0; i < 4; i++) {
            o->entries[o->count].c[i] = -1;
        }
        o->count++;
    }
    o->v11c = o->v114;
    fn_8295A330(o, a);
    return 0;
}
