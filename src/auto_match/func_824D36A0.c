typedef struct { void *vt; char pad[0x64]; void *vt2; } Obj_824D36A0;
extern int fn_824D4E70(void *, void *, int);
extern int fn_82517CB0();
extern void *fn_8265C9E0(unsigned);
extern char lbl_821C0EC0[];
extern char lbl_821C112C[];

Obj_824D36A0 *fn_824D36A0(void *unused, void *ctx)
{
  Obj_824D36A0 *p = (Obj_824D36A0 *)fn_8265C9E0(0x960);
  if (p != 0) {
    fn_824D4E70(p, ctx, 0xb);
    p->vt = lbl_821C0EC0;
    p->vt2 = lbl_821C112C;
    fn_82517CB0();
    return p;
  }
  return 0;
}
