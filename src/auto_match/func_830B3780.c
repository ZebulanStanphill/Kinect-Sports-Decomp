extern int fn_82CE08B8(int, int, int);
extern int fn_82CE08F0(int, int, void *);
extern int fn_82CE0908(int, unsigned int, int, void *, int);

int fn_830B3780(int param_1, int *param_2)
{
  int s;
  int one;

  s = fn_82CE08B8(2, 1, 6);
  *param_2 = s;
  if (s == -1) {
    return 0x8004000b;
  }
  if (fn_82CE0908(s, 0xffff, 0x1006, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (fn_82CE0908(*param_2, 0xffff, 0x1005, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (*(char *)(param_1 + 0xc) != 0) {
    one = 1;
    if (fn_82CE08F0(*param_2, 0x8004667e, &one) != 0) {
      return 0x8004000b;
    }
  }
  return 0;
}
