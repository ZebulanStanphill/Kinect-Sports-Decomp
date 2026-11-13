unsigned __int64
fn_82ABCF88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
             int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned char *puVar7;
  
  if (param_6 != (int *)0x0) {
    if (param_4 == 0) {
      uVar2 = param_5 >> 5;
      iVar5 = (uVar2 + 4) * 4;
      uVar1 = 1 << (param_5 & 0x1f);
      uVar6 = *(unsigned int *)(iVar5 + param_1) & ~uVar1;
      iVar3 = (uVar2 + 0xec) * 4;
      *(unsigned int *)(iVar5 + param_1) = uVar6;
      iVar4 = (uVar2 + 0xf6) * 4;
      *(unsigned int *)(iVar5 + param_1) = (unsigned int)(*param_6 != 0) << (param_5 & 0x1f) | uVar6;
      *(unsigned int *)(iVar3 + param_1) = uVar1 | *(unsigned int *)(iVar3 + param_1);
      *(unsigned int *)(iVar4 + param_1) = uVar1 | *(unsigned int *)(iVar4 + param_1);
    }
    else if (param_4 == 1) {
      puVar7 = (unsigned char *)((param_5 + 0xc) * 4 + param_1);
      iVar3 = ((param_5 >> 5) + 0xf4) * 4;
      *puVar7 = (char)*param_6;
      iVar4 = ((param_5 >> 5) + 0xfe) * 4;
      uVar1 = 1 << (param_5 & 0x1f);
      puVar7[1] = (char)param_6[1];
      puVar7[2] = (char)param_6[2];
      puVar7[3] = (char)param_6[3];
      *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(iVar3 + param_1) | uVar1;
      *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar4 + param_1) | uVar1;
    }
  }
  return 0;
}

