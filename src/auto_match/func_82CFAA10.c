extern int fn_82CE52A8();
extern int fn_82CE5410();


void fn_82CFAA10(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = fn_82CE5410();
  fn_82CE52A8(*(unsigned int *)(iVar2 + 0x10),uVar1);
  return;
}

