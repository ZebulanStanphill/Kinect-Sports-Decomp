typedef unsigned char bool;
extern void fn_82B19D78(void *a, unsigned int t, void *c, unsigned int *d);
static int notNull(unsigned int *p) { if (p) return 1; return 0; }

void fn_82B20438(void *param_1, int param_2, void *param_3, unsigned int *param_4)
{
  unsigned int *p;
  unsigned int t;
  bool ok;
  *param_4 = *param_4 | 0x10000000;
  for (p = *(unsigned int **)(param_2 + 4); notNull(p); p = (unsigned int *)p[2]) {
    t = p[4];
    if (t != 0) {
      ok = ((*p & 0x40000000) != 0) && ((*p & 0xe000000) == 0);
      if (ok && ((*(unsigned int *)(t + 8) & 0x3f80) == 0x3b00)) {
        fn_82B19D78(param_1, t, param_3, param_4);
      }
    }
  }
}
