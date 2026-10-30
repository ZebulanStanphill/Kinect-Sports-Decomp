extern int fn_82230300(void *, int, int);
extern int fn_825ACAC8();
typedef struct S_82E22578 { char a[0x1c]; char b[0x1c]; char c[0x1c]; unsigned short f54; unsigned char f56; unsigned char f57; int f58; unsigned char f5c; char pad[3]; int f60; int f64; int f68; char pad2[0x1c]; char g[1]; } S_82E22578;
S_82E22578 *fn_82E22578(S_82E22578 *p)
{
  char buf[16];
  fn_82230300(p->a, 0, 0);
  fn_82230300(p->b, 0, 0);
  fn_82230300(p->c, 0, 0);
  p->f56 = 0; p->f54 = 0x50; p->f57 = 0; p->f58 = 0; p->f5c = 0; p->f60 = 0; p->f64 = 0; p->f68 = 0;
  fn_825ACAC8(p->g, buf);
  return p;
}
