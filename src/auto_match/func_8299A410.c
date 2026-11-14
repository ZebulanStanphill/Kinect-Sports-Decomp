typedef struct El_8299A410 {
  int pad0;
  unsigned int f4;
  char pad8[8];
  unsigned int f10;
  char pad14[0x38 - 0x14];
  int f38;
  unsigned int f3c;
  char pad40[0x6e - 0x40];
  unsigned char f6e;
  unsigned char f6f;
} El_8299A410;
typedef struct Grp_8299A410 { unsigned int w; unsigned int count; int *idx; } Grp_8299A410;
typedef struct Ctx_8299A410 {
  char pad0[0x14];
  El_8299A410 **tab;
  char pad18[0x80 - 0x18];
  unsigned int f80;
  int pad84;
  int f88;
} Ctx_8299A410;
extern double lbl_82005710;
extern int fn_82964628(Ctx_8299A410 *, int, int, int, double);
extern void fn_82975B00(Ctx_8299A410 *, int, int, const char *);
extern int fn_82996970(unsigned int);

int fn_8299A410(Ctx_8299A410 *c, Grp_8299A410 **groups, unsigned int ng, unsigned int a, unsigned int b, unsigned int nm, int *map)
{
  unsigned int i, j, k;
  Grp_8299A410 *g;
  El_8299A410 *e, *ne;
  unsigned int top;
  int flag, nidx;

  double d;
  i = 0;
  if (ng != 0) {
  d = lbl_82005710;
  do {
    g = groups[i];
    if (g != 0 && g->w != 0) {
      top = g->w & 0xfff00000;
      flag = fn_82996970(top);
      if (top == 0x11000000) flag = 1;
      for (j = 0; j < g->count; j++) {
        e = c->tab[g->idx[j]];
        if (e->f4 == c->f80 && e->f6f == a && b == e->f6e && (flag == 0 || e->f3c != 0)) {
          for (k = 0; k < nm; k++) {
            if (e->f10 == c->tab[map[k]]->f10) {
              nidx = fn_82964628(c, c->f88, 0, e->f10, d);
              if (nidx == -1) return 0x8007000e;
              ne = c->tab[nidx];
              ne->f3c = e->f3c;
              ne->f38 = map[k];
              g->idx[j] = nidx;
              break;
            }
          }
          if (k == nm) {
            fn_82975B00(c, 0, 0x12c1, "internal error: InputRemap component matchup failed");
            return 0x80004005;
          }
        }
      }
    }
    i++;
  } while (i < ng);
  }
  return 0;
}
