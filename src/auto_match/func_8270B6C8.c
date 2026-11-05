extern int fn_8268F260(int, int, int, int *);
extern unsigned char fn_8270B220(int, int, int);

unsigned int fn_8270B6C8(int self, int a, int b)
{
  unsigned int r;
  int node;
  int sub = self + 0x4c;

  r = fn_8268F260(sub, a, b, &node);
  if (r == 0) {
    if (fn_8270B220(self, a, b) == 0)
      return 0;
    r = fn_8268F260(sub, a, b, &node);
    if (r == 0) {
      if (fn_8270B220(self, a, b) == 0)
        return 0;
      r = fn_8268F260(sub, a, b, &node);
    }
  }
  if (r != 0)
    *(int *)(node + 0x18) = *(int *)(node + 0x18) + 1;
  return r;
}
