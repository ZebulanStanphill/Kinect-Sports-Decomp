extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int lbl_831BBCA8;


void fn_82F7F328(char *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = fn_82F6DF30(*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      iVar2 = fn_82F66A80(*param_1);
    } while (iVar2 != 0);
  }
  iVar2 = fn_82F6DF30(*param_1);
  if (iVar2 == 0x78) {
    param_1 = param_1 + 2;
  }
  cVar3 = *param_1;
  *param_1 = *(char *)**(unsigned int **)(lbl_831BBCA8 + 0xbc);
  do {
    cVar1 = param_1[1];
    param_1[1] = cVar3;
    param_1 = param_1 + 1;
    cVar3 = cVar1;
  } while (*param_1 != '\0');
  return;
}

