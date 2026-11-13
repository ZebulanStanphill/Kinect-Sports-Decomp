extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8280A580();
extern int fn_8280A668();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


void fn_8280F6D0(double param_1,double param_2,double param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  int in_r7;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  double dVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar20;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [9];
  
  dVar17 = param_1;
  if ((param_4 & 0x10) != 0) {
    dVar17 = param_3;
    param_3 = param_1;
  }
  if ((param_4 & 4) != 0) {
    dVar17 = -dVar17;
    param_2 = -param_2;
    param_3 = -param_3;
  }
  uVar18 = fn_8280A580(dVar17);
  uVar19 = fn_8280A580(param_2);
  uVar13 = fn_8280A580(param_3);
  uVar20 = extraout_f1;
  uVar13 = fn_8280A668(uVar18,uVar13,afStack_3c,&fStack_44);
  uVar13 = fn_8280A668(uVar19,uVar13,&fStack_4c,&fStack_50);
  fn_8280A668(uVar20,uVar13,&fStack_40,&fStack_48);
  iVar15 = param_4 * 4;
  bVar1 = (&lbl_83156DF0)[iVar15];
  fVar4 = fStack_48 * fStack_44;
  iVar8 = (unsigned int)bVar1 * 4;
  fVar6 = fStack_40 * fStack_44;
  fVar5 = fStack_48 * afStack_3c[0];
  bVar2 = (&lbl_83156DF1)[iVar15];
  fVar7 = fStack_40 * afStack_3c[0];
  bVar3 = (&lbl_83156DF2)[iVar15];
  uVar16 = (unsigned int)bVar3;
  iVar15 = (unsigned int)bVar2 * 4;
  iVar9 = (iVar15 + (unsigned int)bVar1) * 4;
  iVar10 = (uVar16 * 4 + (unsigned int)bVar1) * 4;
  iVar14 = uVar16 * 4 + (unsigned int)bVar2;
  if ((param_4 & 8) == 0) {
    *(float *)((unsigned int)bVar1 * 0x14 + in_r7) = fStack_48 * fStack_50;
    *(float *)(iVar9 + in_r7) = fVar5 * fStack_4c - fVar6;
    *(float *)(iVar10 + in_r7) = fVar4 * fStack_4c + fVar7;
    *(float *)((iVar8 + (unsigned int)bVar2) * 4 + in_r7) = fStack_40 * fStack_50;
    *(float *)((unsigned int)bVar2 * 0x14 + in_r7) = fVar7 * fStack_4c + fVar4;
    *(float *)(iVar14 * 4 + in_r7) = fVar6 * fStack_4c - fVar5;
    *(float *)((iVar8 + uVar16) * 4 + in_r7) = -fStack_4c;
    *(float *)((iVar15 + uVar16) * 4 + in_r7) = fStack_50 * afStack_3c[0];
    *(float *)((unsigned int)bVar3 * 0x14 + in_r7) = fStack_50 * fStack_44;
  }
  else {
    *(float *)((unsigned int)bVar1 * 0x14 + in_r7) = fStack_50;
    *(float *)(iVar9 + in_r7) = fStack_4c * afStack_3c[0];
    *(float *)(iVar10 + in_r7) = fStack_4c * fStack_44;
    *(float *)((iVar8 + (unsigned int)bVar2) * 4 + in_r7) = fStack_40 * fStack_4c;
    *(float *)((unsigned int)bVar2 * 0x14 + in_r7) = -(fVar7 * fStack_50 - fVar4);
    *(float *)(iVar14 * 4 + in_r7) = -(fVar6 * fStack_50) - fVar5;
    *(float *)((iVar8 + (unsigned int)bVar3) * 4 + in_r7) = -(fStack_48 * fStack_4c);
    *(float *)((iVar15 + (unsigned int)bVar3) * 4 + in_r7) = fVar5 * fStack_50 + fVar6;
    *(float *)((unsigned int)bVar3 * 0x14 + in_r7) = fVar4 * fStack_50 - fVar7;
  }
  uVar12 = lbl_821AAD20;
  uVar11 = lbl_82002AE0;
  *(unsigned int *)(in_r7 + 0x30) = lbl_821AAD20;
  *(unsigned int *)(in_r7 + 0x34) = uVar12;
  *(unsigned int *)(in_r7 + 0x38) = uVar12;
  *(unsigned int *)(in_r7 + 0xc) = uVar12;
  *(unsigned int *)(in_r7 + 0x1c) = uVar12;
  *(unsigned int *)(in_r7 + 0x2c) = uVar12;
  *(unsigned int *)(in_r7 + 0x3c) = uVar11;
  return;
}

