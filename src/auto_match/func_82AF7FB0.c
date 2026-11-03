typedef struct Src_82AF7FB0 { char pad[0xc]; int f0c; unsigned f10; } Src_82AF7FB0;
typedef struct Obj_82AF7FB0 { char pad[8]; struct { unsigned :15; unsigned f:3; unsigned :14; } b; char pad2[0x20]; int f2c, f30, f34; } Obj_82AF7FB0;
extern Obj_82AF7FB0 *fn_82B841E8(int, int, int, int, int, int);
extern Src_82AF7FB0 *fn_82ACA920(int, Src_82AF7FB0 *, int);
extern int fn_82AD1978(Obj_82AF7FB0 *, Src_82AF7FB0 *);
extern void fn_82AC6860(int, Obj_82AF7FB0 *, int, int);
Obj_82AF7FB0 *fn_82AF7FB0(int a, int b, int c, Src_82AF7FB0 *s1, Src_82AF7FB0 *s2, Src_82AF7FB0 *s3)
{
  Obj_82AF7FB0 *o = fn_82B841E8(a, *(int *)(c + 0x1c), 0, 0x12, 3, 4);
  o->f2c = fn_82AD1978(o, s1->f10 != 0 ? fn_82ACA920(a, s1, s1->f0c) : s1);
  o->f30 = fn_82AD1978(o, s2->f10 != 0 ? fn_82ACA920(a, s2, s2->f0c) : s2);
  o->f34 = fn_82AD1978(o, s3->f10 != 0 ? fn_82ACA920(a, s3, s3->f0c) : s3);
  o->b.f = 1;
  fn_82AC6860(a, o, b, c);
  return o;
}
