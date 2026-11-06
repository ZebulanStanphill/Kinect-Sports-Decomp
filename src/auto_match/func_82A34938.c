typedef struct Pair_82A34938 {
    int a;
    int b;
} Pair_82A34938;

typedef struct Key_82A34938 {
    unsigned int id;
    unsigned int sub;
    int f8;
} Key_82A34938;

typedef struct Entry_82A34938 {
    int kind;
    int result;
    int f8;
    unsigned int id;
    unsigned int sub;
    int f14;
    Pair_82A34938 *handle;
    int f1c;
    Pair_82A34938 pair;
    int f28;
    char pad2c[0x48 - 0x2c];
    int f48;
    unsigned int f4c;
    unsigned int f50;
    int f54;
    int f58;
} Entry_82A34938;

typedef struct Obj_82A34938 {
    char pad[0x8c];
    char f8c[0xc4 - 0x8c];
    char list[4];
} Obj_82A34938;

extern Entry_82A34938 *fn_82A37838(void *list, int index);
extern void *fn_82A37C50(void *table, unsigned int id, int *tmp);
extern Pair_82A34938 fn_82A34678(Obj_82A34938 *self, void *x, int a);
extern void fn_82A346E0(Obj_82A34938 *self, void *x, int a, Pair_82A34938 pair, int b, int *c,
                        unsigned int *d, unsigned int *e, int *f, int *g);

void fn_82A34938(Obj_82A34938 *self, Key_82A34938 *key, Key_82A34938 *out, int *result)
{
    Entry_82A34938 *e;
    int i;
    void *x;
    int tmp;

    for (i = 0; (e = fn_82A37838(self->list, i)) != 0; i++) {
        if (e->sub == (unsigned int)-1) {
            if (e->kind == 1) {
                if (e->handle->a != -1) {
                    continue;
                }
                x = fn_82A37C50(self->f8c, e->id, &tmp);
                if (x != 0) {
                    *e->handle = fn_82A34678(self, x, e->f14);
                    continue;
                }
            } else if (e->kind == 2) {
                unsigned int *p = &e->f4c;
                if (*p == (unsigned int)-1) {
                    continue;
                }
                x = fn_82A37C50(self->f8c, e->id, &tmp);
                if (x != 0) {
                    Pair_82A34938 pair;
                    pair.b = e->pair.b;
                    pair.a = e->pair.a;
                    fn_82A346E0(self, x, e->f14, pair, e->f28, &e->f48, p, &e->f50, &e->f54, &e->f58);
                    if (*p == (unsigned int)-1) {
                        continue;
                    }
                    e->sub = *p;
                    goto check;
                }
                *p = (unsigned int)-1;
            } else {
                goto check;
            }
            e->sub = 0;
        }
    check:
        if (e->id != key->id || e->sub != key->sub) {
            *out = *(Key_82A34938 *)&e->id;
            *result = e->result;
            return;
        }
        if (e->kind == 2 && e->f4c != (unsigned int)-1 && e->f50 > e->f4c) {
            *out = *(Key_82A34938 *)&e->id;
            out->sub = e->f4c + 1;
            *result = e->result;
            return;
        }
    }
    out->id = 0;
    *result = -1;
}
