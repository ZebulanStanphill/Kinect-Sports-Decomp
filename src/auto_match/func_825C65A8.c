extern char lbl_821C90F8[];
typedef struct Node_825C65A8 { char pad[0x44]; unsigned kind; int p48; struct Node_825C65A8 *next; } Node_825C65A8;
typedef struct Ctx_825C65A8 { char pad[0x934]; Node_825C65A8 **list; } Ctx_825C65A8;
typedef struct Obj_825C65A8 { void *vt; int f4; int f8; Node_825C65A8 *node; } Obj_825C65A8;
extern void fn_82520158(const char *, int *, int);
extern Node_825C65A8 *fn_826249A8(int, int, int *, int *, int *, int *);
Obj_825C65A8 *fn_825C65A8(Obj_825C65A8 *o, int a, Ctx_825C65A8 *c)
{
    int h[4];
    Node_825C65A8 **list;
    Node_825C65A8 *n;
    Node_825C65A8 *m;
    o->f4 = a;
    o->f8 = 0;
    o->vt = lbl_821C90F8;
    fn_82520158("fxFootPrintVertexShader", &h[3], 0);
    fn_82520158("fxFootPrintPixelShader", &h[2], 0);
    fn_82520158("fxFootPrintNormalMap", &h[1], 0);
    fn_82520158("fxFootPrintOcclusionMap", &h[0], 0);
    list = c->list;
    for (n = *list; n != 0 && n->kind != 9; n = n->next)
        ;
    o->node = n;
    if (n == 0) {
        Node_825C65A8 *x = fn_826249A8(9, 0x18, &h[3], &h[2], &h[1], &h[0]);
        if (x == 0) {
            n = 0;
        } else {
            m = *list;
            if (m == 0) {
                *list = x;
            } else {
                while (m->next != 0) m = m->next;
                m->next = x;
            }
            n = x;
        }
        o->node = n;
    }
    return o;
}
