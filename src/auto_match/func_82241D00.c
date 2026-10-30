typedef struct { void *vt; char pad[0x68 - 4]; void *vt2; } Obj_82241D00;
extern void *fn_8265C9E0(unsigned n);
extern void fn_822CA318(void *p, void *q);
extern char lbl_821AE018[];
extern char lbl_821AE064[];

Obj_82241D00 *fn_82241D00(void *param_1)
{
  Obj_82241D00 *o = (Obj_82241D00 *)fn_8265C9E0(0xc0);
  if (o != 0) {
    fn_822CA318(o, param_1);
    o->vt = lbl_821AE018;
    o->vt2 = lbl_821AE064;
    return o;
  }
  return 0;
}
