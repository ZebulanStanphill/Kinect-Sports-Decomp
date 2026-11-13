extern int fn_8269A4E8();
extern int fn_8269B8B8();
extern int fn_8269D300();
extern int fn_8269D380();


void fn_8269D480(int *param_1)

{
  int iVar1;
  unsigned char cVar2;
  
  iVar1 = (*(int (**)())(*param_1 + 0x40))(param_1);
  fn_8269B8B8(param_1,iVar1);
  if (*(int **)(iVar1 + 0xa08) == param_1) {
    *(unsigned int *)(iVar1 + 0xa08) = 0;
  }
  fn_8269A4E8(param_1);
  cVar2 = fn_8269D300(iVar1,param_1);
  if (cVar2 != '\0') {
    fn_8269D380(iVar1);
  }
  if (param_1[0x20] != 0) {
    *(unsigned int *)(param_1[0x20] + 4) = 0;
  }
  return;
}

