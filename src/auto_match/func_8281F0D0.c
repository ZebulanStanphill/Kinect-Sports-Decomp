typedef struct { int x, y, z; } V3_8281F0D0;
typedef struct { V3_8281F0D0 a; V3_8281F0D0 b; } Obj_8281F0D0;
extern V3_8281F0D0 lbl_821CA1A0;
extern void *fn_8281EFB8(Obj_8281F0D0 *p);

Obj_8281F0D0 *fn_8281F0D0(Obj_8281F0D0 *p)
{
  p->a = lbl_821CA1A0;
  p->b = lbl_821CA1A0;
  fn_8281EFB8(p);
  return p;
}
