extern int fn_82A45308(int a, unsigned int i);

int fn_82A47440(char *p)
{
  unsigned int i;
  for (i = 0; i < *(unsigned int *)(p + 0x1c0); i++) {
    if (fn_82A45308(*(int *)(p + 0x1d8), i) == 0) {
      return 1;
    }
  }
  return 0;
}
