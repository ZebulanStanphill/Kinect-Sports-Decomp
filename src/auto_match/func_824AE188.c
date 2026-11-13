extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern unsigned int fStack_58;
extern int fn_824AE6C0();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_28;
extern unsigned int iStack_70;
extern float lbl_8218E8E8;
extern unsigned int uStack_6c;


void fn_824AE188(int param_1,int *param_2)

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
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  struct { int first; unsigned int second; } stack_pair_70;

  unsigned char auStack_68 [8];
  unsigned char auStack_60 [8];
  float fStack_58;
  unsigned char auStack_50 [8];
  float fStack_48;
  unsigned char auStack_40 [8];
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x1d) != '\0') {
    (**(int (***)())*param_2)(param_2,auStack_68,&stack_pair_70.second);
    (**(int (***)())(*param_2 + 4))(param_2,stack_pair_70.second,&stack_pair_70.first);
    iVar1 = *(int *)(stack_pair_70.first + 0x40);
    puVar2 = (unsigned int *)(in_r0 + iVar1 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (unsigned int *)(iVar1 + 0x100U & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (unsigned int *)(iVar1 + 0x200U & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    fn_82F4EBC0(0);
    dVar5 = (double)fn_82F4ED08();
    fStack_30 = (float)dVar5;
    iVar1 = *(int *)(param_1 + 0x3c);
    iStack_28 = *(int *)(stack_pair_70.first + 0x48);
    fStack_2c = -(((fStack_38 - fStack_48) * lbl_8218E8E8 + fStack_48) - fStack_58);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 6 <= iVar4) {
        iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 6);
      }
      if (*(int *)(iVar4 * 0x40 + *(int *)(iVar1 + 0xc) + 0x38) == iStack_28) {
        return;
      }
    }
    fn_824AE6C0(iVar1 + 4,auStack_60);
  }
  return;
}

