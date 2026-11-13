typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82532C90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned char in_vs32 [16];
  unsigned char auVar5 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar8 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    iVar1 = *param_2;
  }
  iVar4 = param_3 * 0x40 + iVar1;
  puVar2 = (unsigned int *)(param_3 * 0x40 + iVar1 & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (unsigned int *)(iVar4 + 0x20U & 0xfffffff0);
  uVar16 = *puVar2;
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  puVar2 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar7, &_vt3, 16); }
  vectorMergeHighWord(auVar6,auVar8);
  vectorMergeLowWord(auVar6,auVar8);
  vectorMergeHighWord(auVar5,auVar7);
  vectorMergeLowWord(auVar5,auVar7);
  puVar3 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_000100a0;
  puVar2[1] = in_register_000100a4;
  puVar2[2] = in_register_000100a8;
  puVar2[3] = in_vr10;
  puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  return;
}

