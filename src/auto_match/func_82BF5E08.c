extern int fn_82BE5C30(int p);
extern unsigned int fn_82BE5CC0(int p);
extern int fn_82BE5F40(int p, int c);
extern int fn_82BE6950(int p, int c);

int fn_82BF5E08(int param_1)
{
  int result;
  unsigned int count;
  int start;
  int c;
  int r;

  result = 0;
  count = fn_82BE5CC0(param_1);
  start = *(int *)(param_1 + 0x20);
  while ((unsigned int)(*(int *)(param_1 + 0x20) - start) < count) {
    c = fn_82BE5C30(param_1);
    if ((unsigned char)c != 0x17) {
      r = fn_82BE5F40(param_1, c);
      if (r == 0) {
        return r;
      }
    }
    else {
      result = fn_82BE6950(param_1, c);
    }
  }
  return result;
}
