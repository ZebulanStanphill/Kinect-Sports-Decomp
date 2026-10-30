typedef struct { void *vt; char pad[0x64]; void *vt2; } Obj_82241AB8;
extern int fn_824D4DC8(void *, void *);
extern int fn_82517CB0();
extern void *fn_8265C9E0(unsigned);
extern char lbl_821C0EC0[];
extern char lbl_821C112C[];

Obj_82241AB8 *fn_82241AB8(void *ctx)
{
  Obj_82241AB8 *p = (Obj_82241AB8 *)fn_8265C9E0(0x960);
  if (p != 0) {
    fn_824D4DC8(p, ctx);
    p->vt = lbl_821C0EC0;
    p->vt2 = lbl_821C112C;
    fn_82517CB0();
    return p;
  }
  return 0;
}
