typedef struct Ref_822F3580 { void *ref; } Ref_822F3580;
typedef struct Obj_822F3580 {
  void *vt; char pad[0x18]; Ref_822F3580 f1c; char pad1[0xc]; Ref_822F3580 f2c; unsigned f30; char pad2[4]; Ref_822F3580 f38; char pad3[4]; Ref_822F3580 f40;
} Obj_822F3580;
extern int fn_822315A0(void *);
extern int fn_822C16B8(unsigned);
extern int fn_8265CA20(unsigned);
extern char lbl_821AE6B4[];
extern char lbl_821AF1C8[];

void fn_822F3580(Obj_822F3580 *p)
{
  unsigned u;
  Ref_822F3580 *r;
  p->vt = lbl_821AE6B4;
  r = &p->f40;
  if (r->ref != 0) fn_822315A0(r->ref);
  r = &p->f38;
  if (r->ref != 0) fn_822315A0(r->ref);
  u = p->f30;
  if (u != 0) {
    fn_822C16B8(u + 8);
    fn_8265CA20(u);
  }
  r = &p->f2c;
  if (r->ref != 0) fn_822315A0(r->ref);
  r = &p->f1c;
  if (r->ref != 0) fn_822315A0(r->ref);
  p->vt = lbl_821AF1C8;
}
