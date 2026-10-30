typedef struct { void *vt; char pad[0x68 - 4]; void *vt2; } Obj_82252BA8;
extern void *fn_8265C9E0(unsigned n);
extern void fn_822CA318(void *p, void *q);
extern char lbl_821AEC50[];
extern char lbl_821AEC9C[];

Obj_82252BA8 *fn_82252BA8(void *param_1)
{
  Obj_82252BA8 *o = (Obj_82252BA8 *)fn_8265C9E0(0xc0);
  if (o != 0) {
    fn_822CA318(o, param_1);
    o->vt = lbl_821AEC50;
    o->vt2 = lbl_821AEC9C;
    return o;
  }
  return 0;
}
