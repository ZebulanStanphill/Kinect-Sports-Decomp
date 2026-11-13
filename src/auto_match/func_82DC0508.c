extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DC7928();
extern int fn_830A2398();
extern int fn_830A4688();


void fn_82DC0508(int param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 in_r0;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int in_register_00010070;
  unsigned int in_register_00010074;
  unsigned int in_register_00010078;
  unsigned int in_vr7;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int auStack_80 [32];
  
  iVar3 = *(int *)(param_1 + 8);
  piVar15 = param_2 + param_3;
  for (; param_2 < piVar15; param_2 = param_2 + 1) {
    iVar4 = *param_2;
    iVar9 = *(int *)(iVar4 + 0x30);
    cVar1 = *(char *)(iVar4 + 0x1c);
    piVar17 = (int *)(iVar9 + 4);
    iVar8 = *(int *)(iVar9 + 4);
    iVar14 = *(int *)(iVar9 + 8);
    iVar12 = *(int *)(iVar8 + 0xa4) + *(int *)(param_1 + 0xc);
    iVar10 = *(int *)(iVar14 + 0xa4) + *(int *)(param_1 + 0xc);
    *(int *)(iVar3 + 0x30) = iVar12;
    *(int *)(iVar3 + 0x34) = iVar10;
    iVar13 = (*(unsigned int *)(*piVar17 + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18);
    iVar11 = (*(unsigned int *)(*(int *)(iVar9 + 8) + 0xa4) >> 2 & 0x3fffffe0) + *(int *)(param_1 + 0x18);
    iVar16 = (int)in_r0;
    puVar6 = (unsigned int *)(iVar16 + iVar13 & 0xfffffff0);
    uVar18 = puVar6[1];
    uVar19 = puVar6[2];
    uVar20 = puVar6[3];
    puVar7 = (unsigned int *)(iVar16 + iVar12 + 0x40 & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar18;
    puVar7[2] = uVar19;
    puVar7[3] = uVar20;
    puVar6 = (unsigned int *)(iVar13 + 0x10U & 0xfffffff0);
    uVar22 = *puVar6;
    uVar23 = puVar6[1];
    uVar24 = puVar6[2];
    uVar25 = puVar6[3];
    puVar6 = (unsigned int *)(iVar16 + iVar12 + 0x50 & 0xfffffff0);
    *puVar6 = uVar22;
    puVar6[1] = uVar23;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    puVar6 = (unsigned int *)(iVar16 + iVar11 & 0xfffffff0);
    uVar18 = puVar6[1];
    uVar19 = puVar6[2];
    uVar20 = puVar6[3];
    puVar7 = (unsigned int *)(iVar16 + iVar10 + 0x40 & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar18;
    puVar7[2] = uVar19;
    puVar7[3] = uVar20;
    puVar6 = (unsigned int *)(iVar11 + 0x10U & 0xfffffff0);
    uVar18 = *puVar6;
    uVar19 = puVar6[1];
    uVar20 = puVar6[2];
    uVar21 = puVar6[3];
    puVar6 = (unsigned int *)(iVar16 + iVar10 + 0x50 & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    *(int *)(iVar3 + 0x38) = iVar8 + 0xf0;
    *(int *)(iVar3 + 0x3c) = iVar14 + 0xf0;
    *(int *)(iVar3 + 0x48) = iVar4;
    *(unsigned int *)(iVar3 + 0x4c) = *(unsigned int *)(*(int *)(iVar4 + 0x30) + 0x1c);
    *(unsigned int *)(iVar3 + 0x50) = *(unsigned int *)(*piVar17 + 0xa4) >> 7 & 0xffff;
    *(unsigned int *)(iVar3 + 0x54) = *(unsigned int *)(*(int *)(iVar9 + 8) + 0xa4) >> 7 & 0xffff;
    *(unsigned int *)(iVar3 + 0x58) = *(unsigned int *)(*(int *)(iVar4 + 0x30) + 0x1c);
    iVar8 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),param_4,0xc);
    }
    iVar16 = (unsigned int)(cVar1 == '\x05') * 0x10 + param_1;
    iVar8 = param_4[1] * 0xc;
    param_4[1] = param_4[1] + 1;
    iVar14 = iVar8 + *param_4;
    *(int *)(iVar8 + *param_4) = iVar4;
    *(unsigned int *)(iVar14 + 4) = *(unsigned int *)(iVar16 + 0x28);
    fVar2 = *(float *)(*(int *)(iVar9 + 8) + 0x5c);
    if (*(float *)(*piVar17 + 0x5c) - fVar2 < 0.0) {
      fVar2 = *(float *)(*piVar17 + 0x5c);
    }
    *(float *)(iVar14 + 8) = fVar2;
    auStack_80[0] = *(unsigned int *)(iVar16 + 0x28);
    iVar9 = (**(int (***)())(**(int **)(iVar4 + 0xc) + 0x20))();
    if (iVar9 == 0xb) {
      fn_82DC7928(*(int *)(iVar4 + 0xc),iVar3,*(unsigned int *)(*(int *)(iVar4 + 0xc) + 0x28),1)
      ;
    }
    if ((*(unsigned char *)(*(int *)(iVar4 + 0x30) + 0x12) & 4) != 0) {
      (**(int (***)())(**(int **)(iVar4 + 0xc) + 0x38))(*(int **)(iVar4 + 0xc),iVar3);
    }
    psVar5 = *(short **)(*(int *)(iVar4 + 0x30) + 0xc);
    if (*psVar5 == 0x16) {
      fn_830A4688(psVar5,iVar3,1);
    }
    else {
      fn_830A2398(psVar5,*(unsigned short *)(*(int *)(iVar4 + 0x30) + 0x10),iVar3,auStack_80);
    }
    *(unsigned int *)(iVar16 + 0x28) = auStack_80[0];
    *(unsigned int *)(param_1 + 0x48) =
         (unsigned int)*(unsigned short *)(*(int *)(iVar4 + 0x30) + 0x18) * 4 + *(int *)(param_1 + 0x48);
    iVar4 = (int)in_r0;
    puVar6 = (unsigned int *)(iVar4 + iVar12 + 0x40 & 0xfffffff0);
    *puVar6 = uVar22;
    puVar6[1] = uVar23;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    puVar6 = (unsigned int *)(iVar4 + iVar12 + 0x50 & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    puVar6 = (unsigned int *)(iVar4 + iVar10 + 0x40 & 0xfffffff0);
    *puVar6 = in_register_00010090;
    puVar6[1] = in_register_00010094;
    puVar6[2] = in_register_00010098;
    puVar6[3] = in_vr9;
    puVar6 = (unsigned int *)(iVar4 + iVar10 + 0x50 & 0xfffffff0);
    *puVar6 = in_register_00010070;
    puVar6[1] = in_register_00010074;
    puVar6[2] = in_register_00010078;
    puVar6[3] = in_vr7;
  }
  **(unsigned int **)(param_1 + 0x28) = 0;
  **(unsigned int **)(param_1 + 0x38) = 0;
  return;
}

