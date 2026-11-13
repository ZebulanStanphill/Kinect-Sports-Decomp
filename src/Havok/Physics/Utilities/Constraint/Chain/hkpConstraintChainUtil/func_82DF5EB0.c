extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82D9AFC0();
extern int fn_82D9CDC0();
extern int fn_82DED480();
extern int fn_82DF6A68();
extern int fn_82DF6B40();


unsigned __int64 fn_82DF5EB0(int param_1,int param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_70 [1];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];

  iVar3 = fn_82DED480(param_1,auStack_70,auStack_60);
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      fn_82D9CDC0(param_2,*(unsigned int *)(param_1 + 0x14));
    }
    iVar3 = (*(int **)(param_2 + 0x38))[*(int *)(param_2 + 0x3c) + -1];
    if (iVar3 == *(int *)(param_1 + 0x14)) {
      fn_82D9AFC0(param_3,auStack_70,auStack_60);
      fn_82D9CDC0(param_2,*(unsigned int *)(param_1 + 0x18));
      return 0;
    }
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      fn_82D9AFC0(param_3,auStack_60,auStack_70);
      fn_82D9CDC0(param_2,*(unsigned int *)(param_1 + 0x14));
      return 0;
    }
    iVar3 = **(int **)(param_2 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x14)) {
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      iVar3 = fn_82CE5410();
      fn_82DF6A68(param_3 + 0x18,*(unsigned int *)(iVar3 + 0x10),0,0,auStack_50,1);
      fn_82DF6B40(param_2,*(unsigned int *)(param_1 + 0x18));
      return 0;
    }
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      puVar1 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      iVar3 = fn_82CE5410();
      fn_82DF6A68(param_3 + 0x18,*(unsigned int *)(iVar3 + 0x10),0,0,auStack_50,1);
      fn_82DF6B40(param_2,*(unsigned int *)(param_1 + 0x14));
      return 0;
    }
  }
  return 1;
}
