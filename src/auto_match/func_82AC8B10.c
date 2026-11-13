static int nn_(void *p) { if (p) return 1; return 0; }
typedef struct Ent_82AC8B10 { unsigned flags; struct Ent_82AC8B10 *next; int f8; struct Ent_82AC8B10 *fc; } Ent_82AC8B10;
extern unsigned char fn_82AC87A0(int *, int *);
extern unsigned char fn_82AE9340(int *);

int fn_82AC8B10(int *param_1, int *param_2)
{
  Ent_82AC8B10 *e;
  unsigned char r = 0;
  unsigned i = 0;
  int *p = param_1 + 1;
  unsigned char b;
  unsigned v;
  do {
    if ((int *)*p != 0 && (int *)*p != param_2) {
      r = fn_82AC87A0(param_1, param_2);
      if (r != 0) break;
    }
    i++;
    p++;
  } while (i <= 6);
  if (r == 0) {
    v = (unsigned)param_2[2] >> 7 & 0x7f;
    if (v < 0x20 || 0x52 < v) {
      b = 0;
    } else {
      b = 1;
    }
    if (b != 0 && param_1[7] != 0 && (int *)param_1[7] != param_2) {
      r = 1;
    }
  }
  if (r == 0 && param_1[7] != 0) {
    r = fn_82AE9340(param_2);
  }
  if (r == 0 && param_1[5] != 0 && (int *)param_1[5] != param_2) {
    r = (param_2[2] & 0x3f80U) == 0x3000 && (param_2[2] & 0x380000U) != 0;
  }
  if (r == 0) {
    for (e = *(Ent_82AC8B10 **)param_2; nn_(e); e = e->next) {
      v = e->flags;
      b = (v & 0x40000000) != 0 && (v & 0xe000000) == 0;
      if (b != 0) {
        int *q = (int *)param_1[(v >> 13 & 0xfff) + 1];
        if (q != 0 && q != param_2 && q != (int *)e->fc) {
          r = 1;
          break;
        }
      }
    }
  }
  return r == 0;
}
