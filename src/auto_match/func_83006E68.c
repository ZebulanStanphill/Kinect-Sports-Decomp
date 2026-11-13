typedef struct Value_83006E68 {
    int data;
    int pad4;
    unsigned char flags;
    char pad9[3];
} Value_83006E68;

typedef struct Entry_83006E68 {
    unsigned int key;
    Value_83006E68 value;
} Entry_83006E68;

typedef struct Map_83006E68 {
    char pad[0x24];
    Entry_83006E68 *first;  /* 0x24 */
    Entry_83006E68 *last;   /* 0x28 */
    int pad2c;
    unsigned int group;     /* 0x30 */
    unsigned int key;       /* 0x34 */
} Map_83006E68;

typedef struct Obj_83006E68 {
    char pad[0x20];
    Map_83006E68 *map;      /* 0x20 */
} Obj_83006E68;

extern void *lbl_832642E8;
extern int fn_82FF6580(void *registry, unsigned int group);

static int ne_83006E68(Entry_83006E68 *a, Entry_83006E68 *b) { return a != b; }

static Value_83006E68 *find_83006E68(Obj_83006E68 *o)
{
    Entry_83006E68 *e;
    unsigned int key = o->map->key;
    Map_83006E68 *m = o->map;
    for (e = m->first; e != m->last && e->key != key; e++) {}
    return ne_83006E68(e, m->last) ? &e->value : 0;
}

int fn_83006E68(Obj_83006E68 *o)
{
    Map_83006E68 *m = o->map;
    Value_83006E68 *p;
    if (m != 0) {
        p = find_83006E68(o);
        if (p != 0) {
            if (p->flags & 0x80)
                return fn_82FF6580(lbl_832642E8, m->group);
            return p->data;
        }
    }
    return 0;
}
