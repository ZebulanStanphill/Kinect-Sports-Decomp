void fn_82D9D820(int param_1,__int64 param_2,__int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if ((int)(param_2 + param_3) <= (int)param_2) {
    return;
  }
  lVar3 = (param_2 + param_3) - param_2;
  iVar4 = (int)param_2 << 4;
  do {
    puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    param_4 = param_4 + 0x10;
    puVar2 = (unsigned int *)(iVar4 + *(int *)(param_1 + 0x28) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    iVar4 = iVar4 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

