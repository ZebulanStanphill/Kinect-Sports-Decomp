extern int fn_8225F160();
extern int fn_8251CDF8(int, int, int, void *);

void fn_82466358(int param_1)
{
  struct { int a, b, c; } L;

  switch (*(unsigned *)(param_1 + 8)) {
  case 1:
    *(int *)(fn_8225F160() + 8) = 1;
    *(int *)(fn_8225F160() + 0x40) = 1;
    *(int *)(fn_8225F160() + 0x64) = 2;
    *(int *)(fn_8225F160() + 0x5c) = 1;
    break;
  case 0:
    *(int *)(fn_8225F160() + 8) = 2;
    *(int *)(fn_8225F160() + 0x40) = 2;
    *(int *)(fn_8225F160() + 0x64) = 1;
    *(int *)(fn_8225F160() + 0x5c) = 2;
    break;
  }
  if (*(int *)(param_1 + 0x1c) == 5) {
    *(int *)(fn_8225F160() + 0x30) = 1;
  } else {
    *(int *)(fn_8225F160() + 0x30) = 0;
  }
  L.a = 0;
  L.b = 0;
  L.c = 0;
  fn_8251CDF8(0, param_1, 0, &L);
}
