typedef struct { int x, y, z; } V3_8281F140;
typedef struct { V3_8281F140 a; V3_8281F140 b; } Obj_8281F140;
extern V3_8281F140 lbl_821CA1A0;
extern void *fn_8281EF18(Obj_8281F140 *p);

Obj_8281F140 *fn_8281F140(Obj_8281F140 *p)
{
  p->a = lbl_821CA1A0;
  p->b = lbl_821CA1A0;
  fn_8281EF18(p);
  return p;
}
