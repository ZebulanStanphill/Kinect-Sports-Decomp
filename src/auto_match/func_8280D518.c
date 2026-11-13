typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_8280CED8();
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8280D518(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar7 [16];
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  
  fn_8280CED8();
  dataCacheBlockTouch(param_2);
  iVar3 = (int)param_2;
  puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x20 & 0xfffffff0);
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + iVar3 + 0x30 & 0xfffffff0);
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs45,in_vs43); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar4, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs45,in_vs43); memcpy(auVar7, &_vt3, 16); }
  vectorMergeHighWord(auVar6,auVar5);
  vectorMergeLowWord(auVar6,auVar5);
  vectorMergeHighWord(auVar4,auVar7);
  vectorMergeLowWord(auVar4,auVar7);
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x10 & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x30 & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  return;
}

