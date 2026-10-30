typedef struct { void *vt; char pad[0x28 - 4]; void *vt2; } Obj_82256900;
extern void *fn_8265C9E0(unsigned n);
extern void fn_82256AD0(void *p, void *q);
extern char lbl_82198190[];
extern char lbl_821981BC[];

Obj_82256900 *fn_82256900(void *param_1)
{
  Obj_82256900 *o = (Obj_82256900 *)fn_8265C9E0(0x1e8);
  if (o != 0) {
    fn_82256AD0(o, (char *)param_1 - 0x28);
    o->vt = lbl_82198190;
    o->vt2 = lbl_821981BC;
    return o;
  }
  return 0;
}
