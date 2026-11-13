extern int fn_82F4FF20();


unsigned __int64 fn_82F50DA8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (param_4 == 0) {
    iVar3 = fn_82F4FF20(param_3);
    iVar3 = iVar3 + 0x31;
  }
  else {
    iVar3 = fn_82F4FF20(param_3);
    iVar3 = iVar3 + 0x1d;
  }
  puVar1 = (unsigned int *)(iVar3 * 0x10 + *(int *)(param_2 + 4) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return param_1;
}

