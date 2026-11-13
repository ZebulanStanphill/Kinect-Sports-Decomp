typedef struct Value_83006EF8 {
    int data;
    int pad4;
    unsigned char flags;
    char pad9[3];
} Value_83006EF8;

typedef struct Entry_83006EF8 {
    unsigned int key;
    Value_83006EF8 value;
} Entry_83006EF8;

typedef struct Map_83006EF8 {
    char pad[0x24];
    Entry_83006EF8 *first;  /* 0x24 */
    Entry_83006EF8 *last;   /* 0x28 */
    int pad2c;
    unsigned int group;     /* 0x30 */
} Map_83006EF8;

typedef struct Obj_83006EF8 {
    char pad[0x20];
    Map_83006EF8 *map;      /* 0x20 */
} Obj_83006EF8;

extern void *lbl_832642E8;
extern int fn_82FF65D0(void *registry, unsigned int group, unsigned int key);

static int ne_83006EF8(Entry_83006EF8 *a, Entry_83006EF8 *b) { return a != b; }

static Value_83006EF8 *find_83006EF8(Map_83006EF8 *m, unsigned int key)
{
    Entry_83006EF8 *e;
    for (e = m->first; e != m->last && e->key != key; e++) {}
    return ne_83006EF8(e, m->last) ? &e->value : 0;
}

int fn_83006EF8(Obj_83006EF8 *o, unsigned int key)
{
    Map_83006EF8 *m = o->map;
    Value_83006EF8 *p;
    if (m != 0) {
        p = find_83006EF8(m, key);
        if (p != 0) {
            if (p->flags & 0x80)
                return fn_82FF65D0(lbl_832642E8, m->group, key);
            return p->data;
        }
    }
    return 0;
}
