typedef struct Obj_82241B30 { void *vt; int w[0x19]; void *vt2; int w2[5]; int f80; int w3; char sub[1]; } Obj_82241B30;
extern char lbl_821B5278[];
extern char lbl_821B52C8[];
extern void *fn_8265C9E0(int);
extern void fn_82517DC8(void *, void *);
extern void fn_823A09C0(void *);

Obj_82241B30 *fn_82241B30(void *param_1)
{
  Obj_82241B30 *o = (Obj_82241B30 *)fn_8265C9E0(0x90);
  if (o != 0) {
    fn_82517DC8(o, param_1);
    o->vt = lbl_821B5278;
    o->vt2 = lbl_821B52C8;
    o->f80 = 0;
    fn_823A09C0(o->sub);
    return o;
  }
  return 0;
}
