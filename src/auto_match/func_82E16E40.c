typedef struct Obj Obj;
typedef struct ObjVt {
    void *pad[5];
    void (*f)(Obj *self, int v, int *pv);
} ObjVt;
struct Obj {
    ObjVt *vt;
    int pad[9];
    char sub[12];
    int val;
};
typedef struct R { int pad[4]; int x; } R;
extern R *fn_82CE5410(void);
extern void fn_82CEA160(void *s, int x, int a, int b);

void fn_82E16E40(Obj *p, int a, int b)
{
    R *r;
    p->val = a;
    r = fn_82CE5410();
    fn_82CEA160(p->sub, r->x, a, b);
    p->vt->f(p, p->val, &p->val);
}
