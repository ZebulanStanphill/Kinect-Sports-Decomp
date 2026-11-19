extern int socket(int, int, int);
extern int ioctlsocket(int, int, void *);
extern int setsockopt(int, unsigned int, int, void *, int);

int fn_830B3780(int param_1, int *param_2)
{
  int s;
  int one;

  s = socket(2, 1, 6);
  *param_2 = s;
  if (s == -1) {
    return 0x8004000b;
  }
  if (setsockopt(s, 0xffff, 0x1006, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (setsockopt(*param_2, 0xffff, 0x1005, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (*(char *)(param_1 + 0xc) != 0) {
    one = 1;
    if (ioctlsocket(*param_2, 0x8004667e, &one) != 0) {
      return 0x8004000b;
    }
  }
  return 0;
}
