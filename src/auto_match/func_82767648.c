extern int fn_82766718();
extern int fn_827672A0();


void fn_82767648(unsigned int *param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  
  fn_827672A0();
  bVar1 = *(unsigned char *)(*(int *)*param_1 + param_1[1]);
  if ((bVar1 & 1) == 0) {
    uVar2 = (unsigned int)(bVar1 >> 1);
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    uVar2 = (unsigned int)((unsigned char *)(*(int *)*param_1 + param_1[1]))[1] << 7 | (unsigned int)(bVar1 >> 1);
  }
  param_1[6] = uVar2;
  param_1[1] = param_1[1] + iVar3;
  fn_82766718(param_1);
  return;
}

