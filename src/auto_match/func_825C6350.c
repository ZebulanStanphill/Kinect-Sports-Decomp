typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_825443D8();
extern int fn_82544B18();
extern int fn_826197B8();
extern int fn_826310E0();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825C6350(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 *puVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar9 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  iVar3 = lbl_8320A898;
  if ((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0xc) != '\0')) {
    uVar1 = *(unsigned int *)(lbl_8320A898 + 0x2948);
    *(unsigned int *)(lbl_8320A898 + 0x2948) = uVar1 & 0xfffffff8;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40;
    fn_82637B30(lbl_8320A898,1);
    fn_82637C50(lbl_8320A898,6);
    fn_82637CE0(lbl_8320A898,7);
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40200;
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x800;
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f18) = 0;
    *(unsigned int *)(iVar3 + 0x2934) = *(unsigned int *)(iVar3 + 0x2934) & 0xfffffffe;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x20800;
    fn_82544B18(lbl_8320A898,0);
    iVar3 = lbl_8320A898;
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar5 = &lbl_83296890;
    }
    else {
      puVar5 = &lbl_83296C20 + param_3 * 0x16;
    }
    puVar2 = (unsigned int *)(in_r0 + (int)puVar5 & 0xfffffff0);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    uVar17 = *(unsigned int *)(puVar5 + 4);
    uVar18 = *(unsigned int *)((int)puVar5 + 0x24);
    uVar19 = *(unsigned int *)(puVar5 + 5);
    uVar20 = *(unsigned int *)((int)puVar5 + 0x2c);
    uVar14 = *(unsigned int *)((int)puVar5 + 0x14);
    uVar15 = *(unsigned int *)(puVar5 + 3);
    uVar16 = *(unsigned int *)((int)puVar5 + 0x1c);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs45); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs45); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs43,in_vs44); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs43,in_vs44); memcpy(auVar8, &_vt3, 16); }
    vectorMergeHighWord(auVar7,auVar9);
    vectorMergeLowWord(auVar7,auVar9);
    vectorMergeHighWord(auVar6,auVar8);
    vectorMergeLowWord(auVar6,auVar8);
    puVar2 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar2 = *(unsigned int *)(puVar5 + 2);
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
    puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000100a0;
    puVar2[1] = in_register_000100a4;
    puVar2[2] = in_register_000100a8;
    puVar2[3] = in_vr10;
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    puVar2[2] = uVar12;
    puVar2[3] = uVar13;
    fn_826310E0(iVar3,4,auStack_80,3,0x4000000000000000);
    uVar4 = fn_825443D8(param_3);
    fn_8263CBB0(lbl_8320A898,0,uVar4,0x80000000);
    for (puVar2 = *(unsigned int **)(param_1 + 8); iVar3 = lbl_8320A898, puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)puVar2[1]) {
      fn_826197B8(*puVar2);
    }
    *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8 | uVar1 & 7;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x40;
    iVar3 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2f04) = 0xf;
    *(unsigned int *)(iVar3 + 0x28dc) =
         *(unsigned int *)(iVar3 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(iVar3 + 0x3148) != 0) & 0xf;
    *(unsigned __int64 *)(iVar3 + 0x10) = *(unsigned __int64 *)(iVar3 + 0x10) | 0x2000000000;
    fn_82637EC0(lbl_8320A898,0);
  }
  return;
}

