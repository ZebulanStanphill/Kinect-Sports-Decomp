typedef struct Ent_827A5CC8 { int kind; char *str; unsigned int len; } Ent_827A5CC8;
typedef struct List_827A5CC8 { Ent_827A5CC8 *items; unsigned int count; } List_827A5CC8;
typedef struct Sub_827A5CC8 { char pad[0x16]; unsigned short bits; } Sub_827A5CC8;
typedef struct Obj_827A5CC8 { char pad[0x2c]; Sub_827A5CC8 sub; } Obj_827A5CC8;
typedef struct Ptrs_827A5CC8 { Obj_827A5CC8 **p; unsigned int count; } Ptrs_827A5CC8;
extern int fn_82790270(const char *, const char *, unsigned int);
extern char lbl_82015C58[];
extern char lbl_821C53CC[];

void fn_827A5CC8(int unused, Ptrs_827A5CC8 *v, List_827A5CC8 *l)
{
    int k;
    int s;
    Ent_827A5CC8 *e;
    const char *name;
    unsigned int n;
    unsigned int i;
    k = 0;
    if (l->items[0].kind == 2) {
        k = 1;
        if (l->count < 2) {
            return;
        }
    }
    e = &l->items[k];
    if (e->kind == 0 || (e->kind == 1 && e->len > 2)) {
        name = e->str;
        n = e->len;
        if (e->kind == 1) {
            name += 2;
            n -= 2;
        }
        s = 0;
        if (fn_82790270(name, lbl_82015C58, n < 6 ? n : 6) == 0) {
            s = 0;
        } else if (fn_82790270(name, "block", n < 5 ? n : 5) == 0) {
            s = 1;
        } else if (fn_82790270(name, lbl_821C53CC, n < 4 ? n : 4) == 0) {
            s = 2;
        }
        for (i = 0; i < v->count; i++) {
            Sub_827A5CC8 *b = &v->p[i]->sub;
            b->bits = (b->bits & 0xe6ff) | ((s & 3) << 11) | 0x100;
        }
    }
}
