extern int fn_82AC6860();
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82B841E8();

typedef struct { char pad[0xc]; int fc; unsigned f10; } A_82AF7E20;
typedef struct { char pad[0x1c]; int f1c; } B_82AF7E20;
typedef struct { int f0; int f4; unsigned f8; char pad[0x2c - 0xc]; int f2c; int f30; } R_82AF7E20;

R_82AF7E20 *fn_82AF7E20(int ctx, int p2, B_82AF7E20 *p3, A_82AF7E20 *p4, A_82AF7E20 *p5)
{
  R_82AF7E20 *r;
  A_82AF7E20 *a;
  A_82AF7E20 *b;
  r = (R_82AF7E20 *)fn_82B841E8(ctx, p3->f1c, 0, 0x10, 2, 4);
  a = p4->f10 != 0 ? (A_82AF7E20 *)fn_82ACA920(ctx, p4, p4->fc) : p4;
  r->f2c = fn_82AD1978(r, a);
  b = p5->f10 != 0 ? (A_82AF7E20 *)fn_82ACA920(ctx, p5, p5->fc) : p5;
  r->f30 = fn_82AD1978(r, b);
  r->f8 = (r->f8 & 0xfffe3fff) | 0x4000;
  fn_82AC6860(ctx, r, p2, p3);
  return r;
}
