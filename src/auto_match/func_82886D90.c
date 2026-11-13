typedef struct Rec_82886D90 { unsigned a; unsigned p4; unsigned b; } Rec_82886D90;
typedef struct Itm_82886D90 Itm_82886D90;
typedef struct VT_82886D90 { int (*f0)(Itm_82886D90 *); int (*f4)(Itm_82886D90 *); } VT_82886D90;
struct Itm_82886D90 {
  VT_82886D90 *vt;
  char pad[0x20];
  unsigned char f24;
  unsigned char p25;
  unsigned short f26;
  char p28[8];
  Itm_82886D90 *next;
};
extern void fn_82886CB0(Rec_82886D90 **, __int64);
extern int *lbl_83212A1C[];

void fn_82886D90(Rec_82886D90 **param_1, Itm_82886D90 **param_2, __int64 param_3)
{
  int n;
  int i;
  Rec_82886D90 *r;
  Rec_82886D90 **q;
  Itm_82886D90 *p;
  int idx;
  unsigned us;
  unsigned u;
  unsigned w;
  unsigned b;

  n = (int)lbl_83212A1C[2];
  if (n > 0) {
    q = param_1;
    i = n;
    do {
      r = *q;
      if (r != 0) {
        r->b = r->a;
      }
      q++;
      i--;
    } while (i != 0);
  }
  for (p = *param_2; p != 0; p = p->next) {
    idx = p->vt->f4(p);
    if (((int *)lbl_83212A1C[0])[idx] > 0 && p->f24 != 0) {
      us = p->f26;
      idx = p->vt->f4(p);
      r = param_1[idx];
      w = 1 << ((int *)lbl_83212A1C[0])[idx];
      b = r->b;
      u = r->a - (w >> 1);
      if (u > w) {
        u = u + w;
      }
      if (b > u) {
        if (us >= u) {
          if (us < b) r->b = us;
        }
      } else {
        if (us < u) {
          if (us < b) r->b = us;
        } else {
          r->b = us;
        }
      }
    }
  }
  fn_82886CB0(param_1, param_3);
}
