extern char lbl_82006020[];
extern void fn_82693880(void *p);
typedef struct Sub { int a; int b; } Sub;
typedef struct Obj { void *vt; Sub s; } Obj;
static void SA(Sub *s) { s->a = 1; }
static void SB(Sub *s) { s->b = 0; }
static void SAB(Sub *s) { s->a = 1; s->b = 0; }
static void VI(Obj *p) { p->vt = lbl_82006020; }
Obj *fn_82693A48(Obj *p)
{
    SAB(&p->s); VI(p);
    fn_82693880(p);
    return p;
}
