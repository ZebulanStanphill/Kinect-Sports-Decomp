extern void fn_8288B338(void *p);
extern void fn_82897D88(void *p);
extern int lbl_82196884[];
extern int lbl_82197534[];
extern int lbl_82198034[];
typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[12]; Sub sub; } S;
static void sub_dtor(Sub *s) { s->vt = lbl_82197534; fn_82897D88(s); }
static void base_dtor(S *p) { p->vt = lbl_82196884; fn_8288B338(p); }
void fn_82251410(S *p)
{
p->vt = lbl_82198034; sub_dtor(&p->sub); base_dtor(p);
}
