typedef struct Ctx_82E1B428 {
    char pad[0x10];
    void *alloc;
} Ctx_82E1B428;
typedef struct Sub_82E1B428 {
    int a;
    int b;
    int c;
} Sub_82E1B428;
typedef struct Elem_82E1B428 {
    void *obj;
    Sub_82E1B428 sub;
} Elem_82E1B428;
typedef struct Array_82E1B428 {
    Elem_82E1B428 *data;
    int size;
    int capAndFlags;
} Array_82E1B428;
typedef struct Var_82E1B428 {
    void *obj;
    void *klass;
} Var_82E1B428;
typedef struct Span_82E1B428 {
    void *data;
    int count;
} Span_82E1B428;
extern char lbl_8323AE68[];
extern Ctx_82E1B428 *fn_82CE5410(void);
extern void fn_82CE6310(void *alloc, Array_82E1B428 *arr, int n, int elemSize);
extern void fn_82CEAB00(Sub_82E1B428 *sub, void *alloc, int a);
extern void *fn_82CE52E0(void *alloc, int size);
extern void *fn_82CEAC28(void *p);
extern void *fn_82CEAC20(void *p);
extern void *fn_82CFC288(void *p);
extern void fn_82CFFF50(Var_82E1B428 *out, void *obj, void *klass);
extern void fn_82CFFC80(Var_82E1B428 *out, Var_82E1B428 *v, const char *name);
extern void *fn_82CFFD70(Var_82E1B428 *v);
extern void **fn_82CFFD78(Var_82E1B428 *v, int i);
extern int *fn_82CFFDD8(Var_82E1B428 *v, int i);
extern int *fn_82CFFDE8(Var_82E1B428 *v, int i);
extern Span_82E1B428 *fn_82CFFEB8(Var_82E1B428 *v, int i);
extern void fn_82E1B0A8(void *map, void *key, void *value);
extern void *fn_82E1A8D0(Array_82E1B428 *arr, void *data, int count);
extern void *fn_82E1B190(Array_82E1B428 *arr, void *mdata, int mcount, void *edata, void *enums, int ecount,
                         Sub_82E1B428 *sub, void *map);
extern void *fn_82E1A9D8(Array_82E1B428 *arr, void *p, void *defaults);
extern void fn_82CEB3D8(void *obj, void *klass, void *name, int a, int b, int numIfaces, void *enums,
                        int numEnums, void *members, int numMembers, void *defaults, int c, int flags, int d);

void *fn_82E1B428(Array_82E1B428 *arr, void *src, void *klass, void *map)
{
    void *alloc;
    int oldSize;
    Ctx_82E1B428 *ctx;
    int n;
    int cap;
    Elem_82E1B428 *e;
    void *cls;
    Span_82E1B428 *enums;
    Span_82E1B428 *members;
    void *enumsObj;
    void *membersObj;
    void *defaultsObj;
    void *obj;
    int *flags;
    int *ifaces;
    Var_82E1B428 v88;
    Var_82E1B428 v90;
    Var_82E1B428 v80;
    Var_82E1B428 v98;
    Var_82E1B428 va0;
    Var_82E1B428 va8;
    Var_82E1B428 vb0;
    Var_82E1B428 vb8;

    alloc = fn_82CE5410()->alloc;
    oldSize = arr->size;
    n = oldSize + 1;
    cap = arr->capAndFlags & 0x3fffffff;
    if (cap < n) {
        cap *= 2;
        fn_82CE6310(alloc, arr, n < cap ? cap : n, 0x10);
    }
    e = &arr->data[arr->size];
    if (e != 0) {
        e->sub.a = 0;
        e->sub.b = 0;
        e->sub.c = -1;
        ctx = fn_82CE5410();
        fn_82CEAB00(&e->sub, ctx->alloc, 0);
    }
    e = &arr->data[oldSize];
    arr->size++;
    e->obj = fn_82CE52E0(fn_82CE5410()->alloc, 0x30);
    if (fn_82CEAC28(src) != 0) {
        fn_82CFFF50(&v88, e->obj, lbl_8323AE68);
        fn_82CFFC80(&v90, &v88, "parent");
        fn_82E1B0A8(map, fn_82CEAC28(src), fn_82CFFD70(&v90));
    }
    fn_82CFFF50(&v80, src, lbl_8323AE68);
    if (klass != 0) {
        cls = fn_82CFC288(klass);
    } else {
        cls = fn_82CFC288(fn_82CEAC20(src));
    }
    fn_82CFFC80(&v98, &v80, "declaredEnums");
    enums = fn_82CFFEB8(&v98, 0);
    enumsObj = fn_82E1A8D0(arr, enums->data, enums->count);
    fn_82CFFC80(&va0, &v80, "declaredMembers");
    members = fn_82CFFEB8(&va0, 0);
    membersObj = fn_82E1B190(arr, members->data, members->count, enums->data, enumsObj, enums->count,
                             &e->sub, map);
    fn_82CFFC80(&va8, &v80, "defaults");
    defaultsObj = fn_82E1A9D8(arr, src, *fn_82CFFD78(&va8, 0));
    obj = e->obj;
    if (obj != 0) {
        fn_82CFFC80(&vb0, &v80, "flags");
        fn_82CFFC80(&vb8, &v80, "numImplementedInterfaces");
        flags = fn_82CFFDE8(&vb0, 0);
        ifaces = fn_82CFFDD8(&vb8, 0);
        fn_82CEB3D8(obj, cls, fn_82CEAC28(src), 0, 0, *ifaces, enumsObj, enums->count, membersObj,
                    members->count, defaultsObj, 0, *flags, 0);
    }
    return e->obj;
}
