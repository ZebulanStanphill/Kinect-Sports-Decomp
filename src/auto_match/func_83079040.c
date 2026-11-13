extern void fn_83078C68(char *, int, double);

void fn_83079040(char *param_2, int param_1, double param_3)
{
  char *lVar1;
  unsigned uVar2;
  char *p;

  uVar2 = 0;
  p = param_2 + 0x10;
  do {
    if (((int)uVar2 < 0) || (uVar2 >= 0x48)) {
      lVar1 = 0;
    } else lVar1 = p;
    fn_83078C68(lVar1, param_1, param_3);
    uVar2 = uVar2 + 1;
    p = p + 400;
  } while (uVar2 < 0x48);
}
