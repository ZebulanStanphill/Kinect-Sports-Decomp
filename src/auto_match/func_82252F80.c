typedef struct { void *vt; char pad[0x68 - 4]; void *vt2; } Obj_82252F80;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82517DC8(void *p, void *q);
extern char lbl_821B6618[];
extern char lbl_821B6658[];

Obj_82252F80 *fn_82252F80(void *param_1)
{
  Obj_82252F80 *o = (Obj_82252F80 *)fn_8265C9E0(0x80);
  if (o != 0) {
    fn_82517DC8(o, param_1);
    o->vt = lbl_821B6618;
    o->vt2 = lbl_821B6658;
    return o;
  }
  return 0;
}
