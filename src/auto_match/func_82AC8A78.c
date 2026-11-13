extern unsigned char fn_82ABE190(unsigned int *);
int fn_82AC8A78(int param_1, unsigned int param_2)
{
  unsigned int *p;
  if ((*(unsigned int *)(param_1 + 8) >> 1 & param_2 & 0xf) != 0) {
    p = *(unsigned int **)(param_1 + 4);
    for (;;) {
      int ok;
      if (p != 0) ok = 1; else ok = 0;
      if (!ok) break;
      if (p[4] != 0 && fn_82ABE190(p) != 0 &&
          (((*p >> 0xd & 0xff0) ^ param_2) & 0xfffffff0) == 0) {
        return 1;
      }
      p = (unsigned int *)p[2];
    }
  }
  return 0;
}
