extern unsigned int *auStack_50;
extern int fn_82F50DA8();
extern int fn_82F512E8();
extern int fn_82F52348();


void fn_824CCF30(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_50 [80];
  
  if (param_4 != 0) {
    iVar3 = fn_82F512E8(auStack_50,*(unsigned int *)(param_1 + 0x20),param_2,-(param_3 != 2) & 2);
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  if (param_5 != 0) {
    iVar3 = fn_82F50DA8(auStack_50,*(unsigned int *)(param_1 + 0x20),param_2,-(param_3 != 2) & 2
                             );
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  fn_82F52348(*(unsigned int *)(param_1 + 0x20),param_2);
  return;
}

