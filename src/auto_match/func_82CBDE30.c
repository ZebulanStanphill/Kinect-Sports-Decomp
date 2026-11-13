void fn_82CBDE30(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x114) + 0xe;
  iVar7 = iVar5;
  if ((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_4 * 4) == 0)) {
    iVar7 = param_2 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -8 + 0xe;
  }
  iVar8 = iVar5;
  if (param_3 != 0) {
    iVar8 = param_2 + -10;
  }
  if (((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_4 * 4) == 0)) &&
     (param_3 != 0)) {
    iVar5 = param_2 + (*(int *)(param_1 + 0x88) * 3 & 0x1fffffffU) * -8 + -10;
  }
  uVar1 = *(unsigned int *)(param_2 + 0xe);
  uVar6 = (unsigned __int64)*(unsigned char *)(iVar7 + 2);
  uVar2 = uVar6;
  if (*(unsigned char *)(iVar5 + 3) == uVar6) {
    uVar2 = (unsigned __int64)*(unsigned char *)(iVar8 + 1);
  }
  uVar2 = uVar1 >> 0x18 ^ uVar2;
  uVar3 = uVar2;
  if (uVar6 != *(unsigned char *)(iVar7 + 3)) {
    uVar3 = (unsigned __int64)*(unsigned char *)(iVar7 + 3);
  }
  uVar3 = (unsigned __int64)(uVar1 >> 0x10) & 0xff ^ uVar3;
  uVar6 = uVar2;
  if (*(unsigned char *)(iVar8 + 1) == uVar2) {
    uVar6 = (unsigned __int64)*(unsigned char *)(iVar8 + 3);
  }
  uVar6 = (unsigned __int64)(uVar1 >> 8) & 0xff ^ uVar6;
  uVar4 = (unsigned int)uVar6;
  if (uVar2 != uVar3) {
    uVar4 = (unsigned int)uVar3;
  }
  *(unsigned int *)(param_2 + 0xe) = (unsigned int)(((uVar2 << 8 | uVar3) << 8 | uVar6) << 8) | uVar4 ^ uVar1 & 0xff
  ;
  return;
}

