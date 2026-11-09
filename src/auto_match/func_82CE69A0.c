typedef struct Obj_82CE69A0 Obj_82CE69A0;
typedef struct {
    void *slot0;
    void *slot1;
    void (*f)(Obj_82CE69A0 *self, int x, int n);
} Vtbl_82CE69A0;
struct Obj_82CE69A0 { Vtbl_82CE69A0 *vt; };

void fn_82CE69A0(Obj_82CE69A0 *p, int x, int n, int m)
{
    p->vt->f(p, x, n * m);
}
