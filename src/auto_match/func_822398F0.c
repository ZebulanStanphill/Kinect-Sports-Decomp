typedef struct { void *vt; char pad[0x24]; void *vt2; } Obj_822398F0;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82239AB0(void *p, void *q);
extern char lbl_82196C50[];
extern char lbl_82196E6C[];

Obj_822398F0 *fn_822398F0(char *param_1)
{
  Obj_822398F0 *o = (Obj_822398F0 *)fn_8265C9E0(0x498);
  if (o != 0) {
    fn_82239AB0(o, param_1 - 0x28);
    o->vt = lbl_82196C50;
    o->vt2 = lbl_82196E6C;
    return o;
  }
  return 0;
}
