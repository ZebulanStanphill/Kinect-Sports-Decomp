extern void *fn_82FA5060(void *, int);
extern int *fn_82FAFD70(int *, void *);
extern int fn_82FAE780(int *);
extern unsigned int lbl_8216CD20;
extern unsigned int lbl_8217C940;
extern void *lbl_831BC768;
typedef struct Base_82FAE9A0 { void *vt; char pad[0x18]; void *f1c; } Base_82FAE9A0;
typedef struct Z_82FAE9A0 { int a, b, c, d; } Z_82FAE9A0;

int *fn_82FAE9A0(void *param_1)
{
  int *p = (int *)fn_82FA5060(lbl_831BC768, 0xb0);
  int *r;
  if (p != 0) {
    fn_82FAFD70(p, param_1);
    *p = (int)&lbl_8216CD20;
    p[7] = (int)&lbl_8217C940;
    { int *q = p + 0x28; q[0] = 0; q[1] = 0; q[2] = 0; q[3] = 0; }
    r = p;
    if (fn_82FAE780(p) != 1) {
      (*(void (**)(int *))(*p + 8))(p);
      r = 0;
    }
  } else r = 0;
  return r;
}
