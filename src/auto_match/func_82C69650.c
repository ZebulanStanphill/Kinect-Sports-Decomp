extern void fn_82CAAF00(int, int *, int);

void fn_82C69650(char *param_1, int param_2)
{
  char *base = *(char **)(param_1 + 0x6070);
  if (0 < param_2) {
    int *p = (int *)(base + 0x46e0);
    int n = param_2;
    do {
      int v;
      fn_82CAAF00(*(int *)(param_1 + 0x3ba4), p, -1);
      v = *p;
      n--;
      p[-0x41] = v;
      p++;
      *(unsigned *)(v + 0x26c) = 0xaaaaaaaa;
    } while (n != 0);
  }
  *(int *)(base + 0x47e0) = param_2;
  *(int *)(base + 0x46dc) = param_2;
}
