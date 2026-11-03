extern int fn_82CFBE40(int);

int fn_82CF0DC8(char *self, int depth, int stride, unsigned char flag)
{
  int best;
  int i;
  int r;
  best = fn_82CFBE40(*(int *)(self + 0x4c)) + depth * stride + 8;
  if (flag == 0 || (*(unsigned *)(self + 0x50) & 1) != 0) {
    for (i = 0; i < *(int *)(self + 0x34); i++) {
      r = fn_82CF0DC8(*(char **)(*(int *)(self + 0x30) + i * 4), depth + 1, stride, flag);
      if (r > best) best = r;
    }
  }
  return best;
}
