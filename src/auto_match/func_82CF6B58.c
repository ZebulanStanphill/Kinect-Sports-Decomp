typedef struct Obj_82CF6B58 Obj_82CF6B58;
typedef struct {
    void *slot0;
    void *slot1;
    void (*f)(Obj_82CF6B58 *self, int x, int n);
} Vtbl_82CF6B58;
struct Obj_82CF6B58 { Vtbl_82CF6B58 *vt; };

void fn_82CF6B58(Obj_82CF6B58 *p, int x, int n, int m)
{
    p->vt->f(p, x, n * m);
}
