extern void *fn_8265C9E0(unsigned n);
extern void fn_82F53A20(void *p, void *q);
extern char lbl_821BFC84[];
extern __int64 lbl_831C4F80;

typedef struct Src_824ABC40 { char pad0[0x48]; __int64 v48; } Src_824ABC40;
typedef struct Obj_824ABC40 { void *vt; char pad4[0x38]; int f3c; } Obj_824ABC40;

Obj_824ABC40 *fn_824ABC40(Src_824ABC40 *param_1)
{
  Obj_824ABC40 *o = (Obj_824ABC40 *)fn_8265C9E0(0x40);
  if (o != 0) {
    fn_82F53A20(o, param_1);
    o->vt = lbl_821BFC84;
    o->f3c = 0;
    lbl_831C4F80 = param_1->v48;
    return o;
  }
  return 0;
}
