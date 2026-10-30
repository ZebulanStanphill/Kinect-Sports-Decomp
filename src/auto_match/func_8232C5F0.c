typedef struct Obj_8232C5F0 Obj_8232C5F0;
typedef struct VT_8232C5F0 { void *s[5]; void (*f14)(Obj_8232C5F0 *, int, int); } VT_8232C5F0;
struct Obj_8232C5F0 { VT_8232C5F0 *vt; int f4; int f8; };
extern int fn_82520780(char *);
extern char lbl_83265A28[];
void fn_8232C5F0(Obj_8232C5F0 *p, int param_2)
{
  int old, nw;
  if (fn_82520780(lbl_83265A28) != 0) {
    old = p->f8;
    nw = (param_2 == 0);
    p->f8 = nw;
    p->vt->f14(p, old, nw);
  }
}
