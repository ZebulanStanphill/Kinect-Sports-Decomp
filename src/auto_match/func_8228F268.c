typedef struct Str_8228F268 {
    union { char *p; char buf[16]; } u;
    unsigned int size;
    unsigned int cap;
    int alloc;
} Str_8228F268;

typedef struct Object_8228F268 Object_8228F268;
typedef struct {
    void *slot0;
    void *slot4;
    unsigned char (*isDead)(Object_8228F268 *self);
} ObjectVtbl_8228F268;
struct Object_8228F268 {
    ObjectVtbl_8228F268 *vt;
};

typedef struct Node_8228F268 {
    struct Node_8228F268 *left, *parent, *right;
    Str_8228F268 key;
    int value;
    char color;
    char isnil;
} Node_8228F268;

typedef struct Tree_8228F268 {
    int pad;
    Node_8228F268 *head;
} Tree_8228F268;

typedef struct {
    char pad0[0x10];
    char *ctx;
    char pad14[0x10];
    Tree_8228F268 map;
    char pad2C[0xc];
    char list[4];
} Self_8228F268;

extern void fn_82230110(Str_8228F268 *s, const char *text);
extern void fn_82230300(Str_8228F268 *s, int built, unsigned int new_size);
extern int fn_8260D428(Str_8228F268 *, int, unsigned, const char *, unsigned);
extern Object_8228F268 *fn_82535298(int *h, int x, void *a, void *b);
extern void fn_82536288(Object_8228F268 **p);
extern void fn_82536690(void *list, Object_8228F268 **p);
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

static __forceinline const char *cstr(Str_8228F268 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static __forceinline int cmp(Str_8228F268 *a, Str_8228F268 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

static __forceinline Node_8228F268 *find(Tree_8228F268 *t, Str_8228F268 *key)
{
    Node_8228F268 *res = t->head;
    Node_8228F268 *n = res->parent;
    Node_8228F268 **pp;
    Node_8228F268 *tmp;
    Node_8228F268 *endn;
    while (n->isnil == 0) {
        Str_8228F268 *k = &n->key;
        if (cmp(k, key) < 0) {
            n = n->right;
        } else {
            res = n;
            n = n->left;
        }
    }
    tmp = res;
    if (res != t->head && cmp(key, &res->key) >= 0) {
        pp = &tmp;
    } else {
        endn = t->head;
        pp = &endn;
    }
    return *pp;
}

void fn_8228F268(Self_8228F268 *self, const char *name)
{
    Str_8228F268 s;
    Node_8228F268 *it;
    fn_82230110(&s, name);
    it = find(&self->map, &s);
    if (it != self->map.head) {
        int *v = &it->value;
        if (v != 0 ? *v != 0 : 0) {
            int h = *v;
            Object_8228F268 *o = fn_82535298(&h, *(int *)(self->ctx + 0x84c), lbl_83296BC0, lbl_83296BD0);
            if (o != 0 && o->vt->isDead(o) == 0) {
                fn_82536690(self->list, &o);
            } else {
                fn_82536288(&o);
            }
        }
    }
    fn_82230300(&s, 1, 0);
}
