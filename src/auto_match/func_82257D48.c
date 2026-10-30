typedef struct { void *vt; char pad[0x68 - 4]; void *vt2; } Obj_82257D48;
extern void *fn_8265C9E0(unsigned n);
extern void fn_824D4DC8(void *p, void *q);
extern char lbl_821C10E0[];
extern char lbl_821C112C[];

Obj_82257D48 *fn_82257D48(void *param_1)
{
  Obj_82257D48 *o = (Obj_82257D48 *)fn_8265C9E0(0x960);
  if (o != 0) {
    fn_824D4DC8(o, param_1);
    o->vt = lbl_821C10E0;
    o->vt2 = lbl_821C112C;
    return o;
  }
  return 0;
}
