extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8307EBA0();


unsigned __int64 fn_82D2A940(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  iVar1 = *(int *)(param_2 + 4);
  puVar2 = (unsigned int *)(*(int *)(iVar1 + 8) + 0x10U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)(*(int *)(iVar1 + 0xc) + 0x10U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)(*(int *)(iVar1 + 0x10) + 0x10U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  fn_8307EBA0(auStack_40,3,param_1);
  return param_1;
}

