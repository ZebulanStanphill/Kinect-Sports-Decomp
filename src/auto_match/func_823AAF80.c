extern int fn_823AA770(int *, int, int, int, int, int);

int fn_823AAF80(int *self, int a, int b, int idx, int v, int w)
{
  int r;
  r = (*(int (**)(int *, int))(*self + 0x84))(self, b);
  if (r == 0) {
    return 1;
  }
  self[idx + 0x1b] = v;
  r = fn_823AA770(self, a, b, idx, v, w);
  self[idx + 0x1b] = v ^ 1;
  return r;
}
