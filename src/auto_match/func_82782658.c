typedef struct {
    int a;
    int b;
    float t;
} Ent_82782658;

typedef struct {
    char pad0[0x8c];
    char x8c[0xc];
    char x98[0x24];
    unsigned int count;      /* 0xbc */
    int padc0[2];            /* 0xc0, 0xc4 */
    Ent_82782658 **blocks;   /* 0xc8 */
} Obj_82782658;

extern Obj_82782658 *fn_8277C2A0(Obj_82782658 *o, unsigned int first, unsigned int last);
extern void fn_8277C100(void *o, void *list);
extern void fn_82782068(Obj_82782658 *o, void *list, float t);

void fn_82782658(Obj_82782658 *o, float start, float end, unsigned int flag)
{
    unsigned int i = 0;
    float cur = start;
    Obj_82782658 *r;

    for (; i < o->count; i++) {
        cur = o->blocks[i >> 6][i & 63].t;
        if (cur > start) break;
        flag = 1;
    }
    r = fn_8277C2A0(o, 0, i);
    if (flag) {
        fn_8277C100(r, o->x98);
    }
    while (i < o->count) {
        float next = cur;
        unsigned int first = i;
        for (; i < o->count; i++) {
            next = o->blocks[i >> 6][i & 63].t;
            if (next > cur) break;
        }
        fn_8277C100(o, o->x98);
        fn_82782068(o, o->x98, start);
        fn_8277C2A0(o, first, i);
        start = cur;
        cur = next;
    }
    fn_8277C100(o, o->x8c);
    if (cur < end) {
        fn_82782068(o, o->x8c, cur);
    }
}
