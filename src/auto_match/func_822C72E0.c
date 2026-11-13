typedef struct Str_822C72E0 {
    union {
        char *p;
        char buf[16];
    } u;
    unsigned int size;
    unsigned int cap;
    int alloc;
} Str_822C72E0;

typedef struct Value_822C72E0 {
    int data[7];
} Value_822C72E0;

typedef struct Node_822C72E0 {
    struct Node_822C72E0 *left;
    struct Node_822C72E0 *parent;
    struct Node_822C72E0 *right;
    Str_822C72E0 key;
    Value_822C72E0 value;
    char color;
    char isnil;
} Node_822C72E0;

typedef struct Tree_822C72E0 {
    int pad;
    Node_822C72E0 *head;
    unsigned int size;
} Tree_822C72E0;

typedef struct Target_822C72E0 Target_822C72E0;
typedef struct TargetVt_822C72E0 {
    void *slot0;
    void (*apply)(Target_822C72E0 *self, Value_822C72E0 *value);
} TargetVt_822C72E0;
struct Target_822C72E0 {
    TargetVt_822C72E0 *vt;
};

typedef struct RefCount_822C72E0 RefCount_822C72E0;

typedef struct Self_822C72E0 {
    char pad0[0x28];
    Target_822C72E0 *targetPtr;
    RefCount_822C72E0 *targetRep;
    char pad30[0x10];
    Tree_822C72E0 map;
} Self_822C72E0;

extern void fn_82230110(Str_822C72E0 *s, const char *text);
extern void fn_82230300(Str_822C72E0 *s, int built, unsigned int newSize);
extern unsigned char fn_8223AAC0(RefCount_822C72E0 *rep);
extern void fn_822315A0(RefCount_822C72E0 *rep);
extern int fn_8260D428(Str_822C72E0 *, int, unsigned int, const char *, unsigned int);

static __forceinline const char *cstr(Str_822C72E0 *s)
{
    return s->cap >= 0x10 ? s->u.p : s->u.buf;
}

static __forceinline int cmp(Str_822C72E0 *a, Str_822C72E0 *b)
{
    unsigned int len = b->size;
    const char *p = cstr(b);
    return fn_8260D428(a, 0, a->size, p, len);
}

static __forceinline Node_822C72E0 *find(Tree_822C72E0 *t, Str_822C72E0 *key)
{
    Node_822C72E0 *res = t->head;
    Node_822C72E0 *n = res->parent;
    Node_822C72E0 **pp;
    Node_822C72E0 *tmp;
    Node_822C72E0 *endn;
    while (n->isnil == 0) {
        Str_822C72E0 *k = &n->key;
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

int fn_822C72E0(Self_822C72E0 *self, const char *name)
{
    RefCount_822C72E0 *otherRep = self->targetRep;
    Target_822C72E0 *otherPtr = self->targetPtr;
    Target_822C72E0 *ptr = 0;
    RefCount_822C72E0 *rep = 0;
    Str_822C72E0 key;
    Node_822C72E0 *it;
    if (otherRep != 0 && fn_8223AAC0(otherRep)) {
        rep = otherRep;
        ptr = otherPtr;
    }
    fn_82230110(&key, name);
    it = find(&self->map, &key);
    fn_82230300(&key, 1, 0);
    if (it != self->map.head) {
        ptr->vt->apply(ptr, &it->value);
        if (rep != 0)
            fn_822315A0(rep);
        return 1;
    }
    if (rep != 0)
        fn_822315A0(rep);
    return 0;
}
