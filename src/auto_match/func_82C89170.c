typedef unsigned char bool;
#define false 0
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_d0;
extern unsigned int uStack_70;


void fn_82C89170(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  unsigned char *pbVar5;
  unsigned short *puVar6;
  int iVar7;
  short *psVar8;
  bool bVar9;
  int *piVar10;
  int *piVar11;
  short *psVar12;
  __int64 lVar13;
  int iStack_d0;
  int aiStack_cc [3];
  short asStack_c0 [4];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  struct { int first; int second; } stack_pair_90;

  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  unsigned int uStack_70;
  int iStack_6c;
  
  pbVar5 = *(unsigned char **)(param_1 + 0x18);
  puVar6 = *(unsigned short **)(param_1 + 0x30);
  iVar7 = *(int *)(param_1 + 0x14);
  asStack_c0[2] = 0;
  asStack_c0[3] = 0;
  asStack_c0[0] = 0;
  asStack_c0[1] = 0;
  puVar6[0xc] = (unsigned short)*pbVar5;
  *puVar6 = (unsigned short)*(unsigned char *)(iVar7 + -1);
  puVar6[0xd] = (unsigned short)pbVar5[1];
  puVar6[1] = (unsigned short)*(unsigned char *)(iVar7 + -2);
  puVar6[0xe] = (unsigned short)pbVar5[2];
  puVar6[2] = (unsigned short)*(unsigned char *)(iVar7 + -3);
  puVar6[0xf] = (unsigned short)pbVar5[3];
  puVar6[3] = (unsigned short)*(unsigned char *)(iVar7 + -4);
  puVar6[0x10] = (unsigned short)pbVar5[4];
  puVar6[4] = (unsigned short)*(unsigned char *)(iVar7 + -5);
  puVar6[0x11] = (unsigned short)pbVar5[5];
  puVar6[5] = (unsigned short)*(unsigned char *)(iVar7 + -6);
  puVar6[0x12] = (unsigned short)pbVar5[6];
  puVar6[6] = (unsigned short)*(unsigned char *)(iVar7 + -7);
  puVar6[0x13] = (unsigned short)pbVar5[7];
  puVar6[7] = (unsigned short)*(unsigned char *)(iVar7 + -8);
  puVar6[0x14] = (unsigned short)pbVar5[8];
  puVar6[8] = 0;
  puVar6[0x15] = (unsigned short)pbVar5[9];
  puVar6[9] = 0;
  puVar6[0x16] = (unsigned short)pbVar5[10];
  puVar6[10] = 0;
  puVar6[0x17] = (unsigned short)pbVar5[0xb];
  puVar6[0xb] = 0;
  iStack_b8 = *(int *)puVar6 << 4;
  iStack_b4 = *(int *)(puVar6 + 0xc) << 4;
  iStack_b0 = *(int *)(puVar6 + 2) * 0x10 + ((*(int *)puVar6 << 4) >> 1);
  iStack_ac = *(int *)(puVar6 + 0xe) * 0x10 + ((*(int *)(puVar6 + 0xc) << 4) >> 1);
  iStack_a8 = *(int *)(puVar6 + 4) * 0x10 + (iStack_b0 >> 1);
  iStack_a4 = *(int *)(puVar6 + 0x10) * 0x10 + (iStack_ac >> 1);
  iStack_7c = *(int *)(puVar6 + 0x10) * 0x10 + (*(int *)(puVar6 + 0x12) * 0x10 >> 1);
  iStack_80 = *(int *)(puVar6 + 4) * 0x10 + ((*(int *)(puVar6 + 6) << 4) >> 1);
  iStack_84 = *(int *)(puVar6 + 0xe) * 0x10 + (iStack_7c >> 1);
  uStack_70 = 0;
  iStack_78 = *(int *)(puVar6 + 6) << 4;
  iStack_88 = *(int *)(puVar6 + 2) * 0x10 + (iStack_80 >> 1);
  lVar13 = 2;
  iStack_74 = *(int *)(puVar6 + 0x14) * 8 + *(int *)(puVar6 + 0x12) * 0x10;
  stack_pair_90.first = *(int *)puVar6 * 0x10 + (iStack_88 >> 1);
  iStack_a0 = *(int *)(puVar6 + 6) * 0x10 + (iStack_a8 >> 1);
  iStack_9c = *(int *)(puVar6 + 0x12) * 0x10 + (iStack_a4 >> 1);
  stack_pair_90.second = *(int *)(puVar6 + 0xc) * 0x10 + (iStack_84 >> 1);
  iStack_6c = (*(int *)(puVar6 + 0x14) * 2 + *(int *)(puVar6 + 0x16)) * 8;
  psVar12 = asStack_c0;
  iStack_d0 = *(int *)(param_1 + 0x2c) + -2;
  piVar11 = &stack_pair_90.first;
  aiStack_cc[0] = *(int *)(param_1 + 0x28) + -2;
  bVar9 = false;
  do {
    piVar10 = &iStack_d0;
    if (!bVar9) {
      piVar10 = aiStack_cc;
    }
    sVar1 = *psVar12;
    sVar2 = *(short *)piVar11;
    sVar3 = psVar12[1];
    iVar7 = *piVar11;
    psVar8 = (short *)*piVar10;
    *psVar8 = (short)((unsigned int)(((int)sVar2 + (int)sVar1) * 0xb5 + 0x80) >> 8) + ((short)iVar7 >> 1) +
              sVar3;
    *piVar10 = (int)(psVar8 + 2);
    psVar8[1] = (short)((unsigned int)(((int)(short)iVar7 + (int)sVar3) * 0xb5 + 0x80) >> 8) + (sVar1 >> 1)
                + sVar2;
    piVar10 = &iStack_d0;
    if (!(bool)(bVar9 ^ 1U)) {
      piVar10 = aiStack_cc;
    }
    sVar1 = psVar12[2];
    sVar2 = *(short *)(piVar11 + 1);
    sVar3 = psVar12[3];
    sVar4 = *(short *)((int)piVar11 + 6);
    psVar8 = (short *)*piVar10;
    *psVar8 = (short)((unsigned int)(((int)sVar2 + (int)sVar1) * 0xb5 + 0x80) >> 8) + (sVar4 >> 1) + sVar3;
    *piVar10 = (int)(psVar8 + 2);
    psVar8[1] = (short)((unsigned int)(((int)sVar4 + (int)sVar3) * 0xb5 + 0x80) >> 8) + (sVar1 >> 1) + sVar2
    ;
    piVar10 = &iStack_d0;
    if (!bVar9) {
      piVar10 = aiStack_cc;
    }
    sVar1 = psVar12[4];
    sVar2 = *(short *)(piVar11 + 2);
    sVar3 = psVar12[5];
    sVar4 = *(short *)((int)piVar11 + 10);
    psVar8 = (short *)*piVar10;
    *psVar8 = (short)((unsigned int)(((int)sVar2 + (int)sVar1) * 0xb5 + 0x80) >> 8) + (sVar4 >> 1) + sVar3;
    *piVar10 = (int)(psVar8 + 2);
    psVar8[1] = (short)((unsigned int)(((int)sVar4 + (int)sVar3) * 0xb5 + 0x80) >> 8) + (sVar1 >> 1) + sVar2
    ;
    piVar10 = &iStack_d0;
    if (!(bool)(bVar9 ^ 1U)) {
      piVar10 = aiStack_cc;
    }
    sVar1 = psVar12[6];
    sVar2 = *(short *)(piVar11 + 3);
    sVar3 = psVar12[7];
    sVar4 = *(short *)((int)piVar11 + 0xe);
    psVar8 = (short *)*piVar10;
    *psVar8 = (short)((unsigned int)(((int)sVar2 + (int)sVar1) * 0xb5 + 0x80) >> 8) + (sVar4 >> 1) + sVar3;
    *piVar10 = (int)(psVar8 + 2);
    psVar8[1] = (short)((unsigned int)(((int)sVar4 + (int)sVar3) * 0xb5 + 0x80) >> 8) + (sVar1 >> 1) + sVar2
    ;
    piVar10 = &iStack_d0;
    if (!bVar9) {
      piVar10 = aiStack_cc;
    }
    sVar1 = psVar12[8];
    bVar9 = (bool)(bVar9 ^ 1);
    sVar2 = *(short *)(piVar11 + 4);
    sVar3 = psVar12[9];
    sVar4 = *(short *)((int)piVar11 + 0x12);
    psVar8 = (short *)*piVar10;
    *psVar8 = (short)((unsigned int)(((int)sVar2 + (int)sVar1) * 0xb5 + 0x80) >> 8) + (sVar4 >> 1) + sVar3;
    psVar12 = psVar12 + 10;
    psVar8[1] = (short)((unsigned int)(((int)sVar4 + (int)sVar3) * 0xb5 + 0x80) >> 8) + (sVar1 >> 1) + sVar2
    ;
    piVar11 = piVar11 + 5;
    *piVar10 = (int)(psVar8 + 2);
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

