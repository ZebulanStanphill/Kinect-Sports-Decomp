extern int fn_82CE5410();
extern int fn_82CE63B0();


unsigned int fn_82DC1640(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x20) == (*(unsigned int *)(iVar1 + 0x24) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(unsigned int *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = 5;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x20) == (*(unsigned int *)(iVar1 + 0x24) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),(int *)(iVar1 + 0x1c),4);
  }
  *(int *)(*(int *)(iVar1 + 0x20) * 4 + *(int *)(iVar1 + 0x1c)) = param_3;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(unsigned int *)(iVar1 + 0x14);
  iVar5 = fn_82CE5410();
  if (*(unsigned int *)(iVar1 + 0x14) == (*(unsigned int *)(iVar1 + 0x18) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),(int *)(iVar1 + 0x10),0x10);
  }
  puVar3 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (unsigned int *)
           (in_r0 + *(int *)(iVar1 + 0x14) * 0x10 + *(int *)(iVar1 + 0x10) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  *(unsigned char *)(param_3 + param_1 + 0x10) = 1;
  *(unsigned char *)(param_3 + param_1 + 0x13) = 1;
  return uVar2;
}

