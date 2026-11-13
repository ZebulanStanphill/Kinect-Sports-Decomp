extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int fStack_30;
extern int fn_824B2210();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_2c;
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_824B1D10(int param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned char auStack_58 [8];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  float fStack_30;
  int iStack_2c;
  
  (**(int (***)())*param_2)(param_2,auStack_58,&stack_pair_60.second);
  (**(int (***)())(*param_2 + 4))(param_2,stack_pair_60.second,&stack_pair_60.first);
  puVar2 = (unsigned int *)(*(int *)(stack_pair_60.first + 0x40) + 0x150U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(*(int *)(stack_pair_60.first + 0x40) + 0x250U & 0xfffffff0);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  fn_82F4EBC0(0);
  dVar5 = (double)fn_82F4ED08();
  iVar1 = *(int *)(param_1 + 0x3c);
  fStack_30 = (float)dVar5;
  iStack_2c = *(int *)(stack_pair_60.first + 0x48);
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar4 = *(int *)(iVar1 + 0x14) + -1;
    if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x30 <= iVar4) {
      iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x30;
    }
    if (*(int *)(iVar4 * 0x30 + *(int *)(iVar1 + 0xc) + 0x24) == iStack_2c) {
      return;
    }
  }
  fn_824B2210(iVar1 + 4,auStack_50);
  return;
}

