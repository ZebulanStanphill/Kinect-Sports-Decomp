extern unsigned int *auStack_30;
extern int fn_82D33BC0();
extern int fn_82D33E78();


void fn_82D34CD0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int auStack_30 [12];
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) == (param_2 & 0xffffffff)) {
    iVar3 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 4) +
            *(int *)(param_1 + 0x1c);
    puVar1 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  else {
    fn_82D33E78(param_1,param_2,auStack_30);
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    iVar3 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 4) +
            *(int *)(param_1 + 0x1c);
    puVar2 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    fn_82D33BC0(param_1,*(unsigned int *)(param_1 + 0x14),param_2,auStack_30[0]);
  }
  return;
}

