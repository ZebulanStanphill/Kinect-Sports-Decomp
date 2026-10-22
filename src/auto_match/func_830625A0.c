typedef struct Elem {
    int *key;
    int val;
} Elem;

typedef struct Group {
    int a;
    Elem *begin;
    Elem *end;
    int pad[3];
} Group;

typedef struct Obj {
    char pad0[0x18];
    int count;
    char pad1[0x10];
    Group *groups;
} Obj;

extern void fn_830621E8(Obj *o, int x);
extern void fn_83060438(Group *g);
extern unsigned char fn_83061F80(Obj *o, Group *g, Elem a, Elem b, int p2, int p3, int p4);
extern void fn_830619F8(Obj *o);
extern void fn_83062318(Obj *o);

int fn_830625A0(Obj *o, int p2, int p3, int p4)
{
    int merged;
    unsigned char again;
    Group *g;
    int gi;
    unsigned char retry;
    int n;
    int i;
    int run;
    int key;
    Elem e;

    fn_830621E8(o, 0);
    merged = 0;
    do {
        again = 0;
        g = o->groups;
        for (gi = 0; gi < o->count; gi++, g++) {
            do {
                retry = 0;
                fn_83060438(g);
                n = g->end - g->begin;
                i = 0;
                while (i < n) {
                    e = g->begin[i];
                    i++;
                    run = 1;
                    key = *e.key;
                    while (i < n) {
                        e = g->begin[i];
                        if (*e.key != key) {
                            break;
                        }
                        run++;
                        i++;
                    }
                    if (run == 2 && fn_83061F80(o, g, g->begin[i - 2], g->begin[i - 1], p2, p3, p4)) {
                        merged++;
                        again = 1;
                        retry = 1;
                        break;
                    }
                }
            } while (retry);
        }
    } while (again);
    fn_830619F8(o);
    if (merged != 0) {
        fn_83062318(o);
    }
    return merged;
}
