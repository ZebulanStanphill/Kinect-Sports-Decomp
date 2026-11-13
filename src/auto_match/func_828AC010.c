extern int fn_8265C9E0();
extern unsigned int lbl_82024528;


typedef struct VT_828AC010 { void (*del)(void *, int); } VT_828AC010;
typedef struct Obj_828AC010 { VT_828AC010 *vt; int val; } Obj_828AC010;

Obj_828AC010 **fn_828AC010(Obj_828AC010 **param_1, int *param_2)
{
  Obj_828AC010 *n, *mem;
  Obj_828AC010 *old;

  mem = (Obj_828AC010 *)fn_8265C9E0(8);
  if (mem != 0) {
    n = mem;
    n->vt = (VT_828AC010 *)&lbl_82024528;
    n->val = *param_2;
  } else {
    n = 0;
  }
  old = *param_1;
  *param_1 = n;
  if (old != 0) {
    old->vt->del(old, 1);
  }
  return param_1;
}
