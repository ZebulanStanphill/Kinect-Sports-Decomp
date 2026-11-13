extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8280A580();
extern int fn_8280A668();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83156DF0;
extern unsigned int lbl_83156DF1;
extern unsigned int lbl_83156DF2;


void fn_8280F4A0(double param_1,double param_2,double param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int in_r7;
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
  fVar3 = fStack_48 * fStack_44;
  iVar14 = (unsigned int)bVar1 * 3;
  fVar5 = fStack_40 * fStack_44;
  fVar4 = fStack_48 * afStack_3c[0];
  uVar16 = (unsigned int)(unsigned char)(&lbl_83156DF1)[iVar15];
  fVar6 = fStack_40 * afStack_3c[0];
  bVar2 = (&lbl_83156DF2)[iVar15];
  iVar7 = (uVar16 * 3 + (unsigned int)bVar1) * 4;
  iVar8 = ((unsigned int)bVar2 * 3 + (unsigned int)bVar1) * 4;
  iVar9 = (iVar14 + uVar16) * 4;
  iVar15 = (unsigned int)(unsigned char)(&lbl_83156DF1)[iVar15] * 0x10;
  iVar10 = ((unsigned int)bVar2 * 3 + uVar16) * 4;
  iVar11 = (uVar16 * 3 + (unsigned int)bVar2) * 4;
  if ((param_4 & 8) == 0) {
    *(float *)((unsigned int)bVar1 * 0x10 + in_r7) = fStack_48 * fStack_50;
    *(float *)(iVar7 + in_r7) = fVar4 * fStack_4c - fVar5;
    *(float *)(iVar8 + in_r7) = fVar3 * fStack_4c + fVar6;
    *(float *)(iVar9 + in_r7) = fStack_40 * fStack_50;
    *(float *)(iVar15 + in_r7) = fVar6 * fStack_4c + fVar3;
    *(float *)(iVar10 + in_r7) = fVar5 * fStack_4c - fVar4;
    *(float *)((iVar14 + (unsigned int)bVar2) * 4 + in_r7) = -fStack_4c;
    *(float *)(iVar11 + in_r7) = fStack_50 * afStack_3c[0];
    *(float *)((unsigned int)bVar2 * 0x10 + in_r7) = fStack_50 * fStack_44;
  }
  else {
    *(float *)((unsigned int)bVar1 * 0x10 + in_r7) = fStack_50;
    *(float *)(iVar7 + in_r7) = fStack_4c * afStack_3c[0];
    *(float *)(iVar8 + in_r7) = fStack_4c * fStack_44;
    *(float *)(iVar9 + in_r7) = fStack_40 * fStack_4c;
    *(float *)(iVar15 + in_r7) = -(fVar6 * fStack_50 - fVar3);
    *(float *)(iVar10 + in_r7) = -(fVar5 * fStack_50) - fVar4;
    *(float *)((iVar14 + (unsigned int)bVar2) * 4 + in_r7) = -(fStack_48 * fStack_4c);
    *(float *)(iVar11 + in_r7) = fVar4 * fStack_50 + fVar5;
    *(float *)((unsigned int)bVar2 * 0x10 + in_r7) = fVar3 * fStack_50 - fVar6;
  }
  uVar12 = lbl_821AAD20;
  *(unsigned int *)(in_r7 + 0x24) = lbl_821AAD20;
  *(unsigned int *)(in_r7 + 0x28) = uVar12;
  *(unsigned int *)(in_r7 + 0x2c) = uVar12;
  return;
}

