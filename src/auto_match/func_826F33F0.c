extern int fn_826E7800();
extern int fn_826E90B0();
extern int fn_82F68B7C();


void fn_826F33F0(int param_1,unsigned char *param_2,int param_3)

{
  unsigned char uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x314);
  if (param_3 < 0x17) {
    iVar3 = param_1 + 0x28;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    fn_82F68B7C(iVar3);
    return;
  }
  iVar3 = param_1 + 0x28;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  fn_826E90B0();
  *(unsigned char *)(iVar3 + 0x15) = 0;
  if (*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x2c) < 1) {
    fn_826E7800(iVar3,1);
  }
  uVar1 = *(unsigned char *)(*(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x2c));
  *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + 1;
  *param_2 = uVar1;
  return;
}

