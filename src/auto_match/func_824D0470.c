typedef struct { void *vt; char pad[0x64]; void *vt2; } Obj_824D0470;
extern int fn_824D4E70(void *, void *, int);
extern void *fn_8265C9E0(unsigned);
extern char lbl_821C10E0[];
extern char lbl_821C112C[];

Obj_824D0470 *fn_824D0470(void *unused, void *ctx)
{
  Obj_824D0470 *p = (Obj_824D0470 *)fn_8265C9E0(0x960);
  if (p != 0) {
    fn_824D4E70(p, ctx, 0xb);
    p->vt = lbl_821C10E0;
    p->vt2 = lbl_821C112C;
    return p;
  }
  return 0;
}
