extern unsigned int *auStack_20;
extern int fn_822AF200();


void fn_822AF138(char *param_1, int param_2)
{
  char *b;
  int piVar1;
  unsigned char cVar2;
  unsigned int auStack_20[2];

  b = param_1 + 0x4;
  auStack_20[0] = 0;
  fn_822AF200(b + 0x40, auStack_20);
  piVar1 = *(int *)(*(int *)(b + 0x3c) + 8);
  if (piVar1 != 0) {
    cVar2 = (*(unsigned char (**)(int, int))(*(int *)piVar1 + 8))(piVar1, param_2);
  } else {
    cVar2 = 1;
  }
  if (cVar2 != 0) {
    *(int *)(b + 0x18) = param_2;
  }
}
