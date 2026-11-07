typedef struct Obj_82891F28 Obj_82891F28;

typedef struct Vtbl_82891F28 {
    void (*f0)(Obj_82891F28 *self, void *arg);
    void (*f1)(Obj_82891F28 *self, void *arg);
} Vtbl_82891F28;

struct Obj_82891F28 {
    Vtbl_82891F28 *vt;
};

typedef struct Vec_82891F28 {
    Obj_82891F28 **first;
    Obj_82891F28 **last;
    Obj_82891F28 **end;
} Vec_82891F28;

extern void fn_8223C478(void *s, int a, int b);
extern void fn_828E9DB8(void *s, int present, int b);
extern __declspec(noreturn) void fn_82F622E0(const char *msg);

void fn_82891F28(void *s, Vec_82891F28 *v)
{
    unsigned int n;
    unsigned int i;

    n = (unsigned int)(v->last - v->first);
    for (i = 0; i < n; i++) {
        Obj_82891F28 *o;
        if ((unsigned int)(v->last - v->first) <= i) {
            fn_82F622E0("invalid vector<T> subscript");
        }
        o = v->first[i];
        fn_8223C478(s, 1, 0);
        fn_828E9DB8(s, o != 0, 1);
        if (o != 0) {
            o->vt->f1(o, s);
        }
    }
}
