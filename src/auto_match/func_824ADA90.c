extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_58;
extern unsigned int fStack_68;
extern unsigned int fStack_78;
extern int fn_824A62D0();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_28;
extern unsigned int iStack_90;
extern float lbl_8218E8E8;
extern unsigned int uStack_8c;


void fn_824ADA90(int param_1,int *param_2)

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
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [8];
  float fStack_78;
  unsigned char auStack_70 [8];
  float fStack_68;
  unsigned char auStack_60 [8];
  float fStack_58;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x1d) != '\0') {
    (**(int (***)())*param_2)(param_2,auStack_88,&uStack_8c);
    (**(int (***)())(*param_2 + 4))(param_2,uStack_8c,&iStack_90);
    iVar1 = *(int *)(iStack_90 + 0x40);
    puVar2 = (unsigned int *)(in_r0 + iVar1 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (unsigned int *)(iVar1 + 0x100U & 0xfffffff0);
    uVar21 = *puVar3;
    uVar22 = puVar3[1];
    uVar23 = puVar3[2];
    uVar24 = puVar3[3];
    puVar3 = (unsigned int *)(iVar1 + 0x200U & 0xfffffff0);
    uVar17 = *puVar3;
    uVar18 = puVar3[1];
    uVar19 = puVar3[2];
    uVar20 = puVar3[3];
    puVar3 = (unsigned int *)(iVar1 + 0x110U & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (unsigned int *)(iVar1 + 0x210U & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
    puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
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
    iStack_28 = *(int *)(iStack_90 + 0x48);
    fStack_2c = -(((fStack_58 - fStack_68) * lbl_8218E8E8 + fStack_68) - fStack_78);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x60 <= iVar4) {
        iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x60;
      }
      if (*(int *)(iVar4 * 0x60 + *(int *)(iVar1 + 0xc) + 0x58) == iStack_28) {
        return;
      }
    }
    fn_824A62D0(iVar1 + 4,auStack_80);
  }
  return;
}

