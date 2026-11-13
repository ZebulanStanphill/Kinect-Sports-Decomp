extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_8323B1C0;


void fn_82DA1108(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar4 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0x1c) == (*(unsigned int *)(param_1 + 0x20) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),(int *)(param_1 + 0x18),0x50);
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  iVar4 = iVar4 * 0x50;
  iVar5 = iVar4 + iVar1;
  puVar3 = (unsigned int *)(iVar4 + iVar1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(int *)(iVar5 + 0x40) = (int)param_5;
  puVar2 = (unsigned int *)(iVar5 + 0x20U & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  fn_82CE4040(param_5);
  *(int *)(iVar5 + 0x44) = (int)param_6;
  fn_82CE4040(param_6);
  *(int *)(iVar5 + 0x48) = (int)param_7;
  fn_82CE4040(param_7);
  *(unsigned char *)(iVar5 + 0x4c) = 0;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1C0 + in_r0) & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(iVar5 + 0x30U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  return;
}

