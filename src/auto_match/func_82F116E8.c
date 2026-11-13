__int64 fn_82F116E8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar4;
  
  iVar7 = *(int *)(param_1 + 0x1e5c) + 4;
  iVar8 = iVar7;
  if ((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_4 * 4) == 0)) {
    iVar8 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + 4;
  }
  iVar6 = iVar7;
  if (param_3 != 0) {
    iVar6 = param_2 + -0x110;
  }
  if (((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x8d8) + param_4 * 4) == 0)) && (param_3 != 0)
     ) {
    iVar7 = param_2 + *(int *)(param_1 + 0x2d0) * -0x114 + -0x110;
  }
  uVar1 = *(unsigned int *)(iVar8 + 8);
  uVar5 = uVar1;
  if (*(unsigned int *)(iVar7 + 0xc) == uVar1) {
    uVar5 = *(unsigned int *)(iVar6 + 4);
  }
  uVar2 = *(unsigned int *)(iVar8 + 0xc);
  if (uVar1 == uVar2) {
    uVar2 = *(unsigned int *)(param_2 + 4);
  }
  uVar1 = *(unsigned int *)(param_2 + 4);
  uVar4 = uVar1;
  if (*(unsigned int *)(iVar6 + 4) == uVar1) {
    uVar4 = *(unsigned int *)(iVar6 + 0xc);
  }
  uVar3 = *(unsigned int *)(param_2 + 8);
  if (uVar1 == uVar3) {
    uVar3 = *(unsigned int *)(param_2 + 0xc);
  }
  return ((((((((unsigned __int64)uVar5 & 0x7fffffff) << 1 | (unsigned __int64)uVar2) & 0x7fffffff) << 1 |
            (unsigned __int64)uVar4) & 0x7fffffff) << 1 | (unsigned __int64)uVar3) & 0x3fffffff) << 2;
}

