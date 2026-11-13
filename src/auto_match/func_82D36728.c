extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82D33BC0();
extern int fn_82D362D8();
extern int fn_82D363A0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82D36728(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int auStack_70;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_38;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  piVar7 = (int *)(param_1 + 0x14);
  puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uStack_38 = 0x80000000;
  puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  piVar6 = (int *)(param_1 + 0x10);
  piVar5 = (int *)(param_1 + 0x1c);
  uStack_40 = param_3;
  uVar4 = fn_82D362D8(piVar5,piVar6,piVar7,auStack_60);
  if (*(int *)(param_1 + 0x14) == 0x7fffffff) {
    iVar3 = (int)uVar4 * 0x30 + *piVar5;
    *(unsigned int *)(iVar3 + 0x2c) = 0x7fffffff;
    *(unsigned int *)(iVar3 + 0x28) = *(unsigned int *)(iVar3 + 0x28) | 0x7fffffff;
    *piVar6 = iVar3;
    *piVar7 = (int)uVar4;
  }
  else {
    fn_82D363A0(piVar5,piVar6,piVar7,&auStack_70);
    fn_82D33BC0(param_1,*piVar7,uVar4,auStack_70);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar4;
}

