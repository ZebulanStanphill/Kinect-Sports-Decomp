#define CARRY8(a,b) ((((unsigned __int64)(a)) + ((unsigned __int64)(b))) < ((unsigned __int64)(a)))
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_8263C620();
extern int fn_8263C700();
extern int fn_82837DF0();
extern int fn_8284C428();
extern int fn_8284C528();
extern int fn_8284C5C8();
extern int fn_8284C628();
extern int fn_8284C6E0();
extern int fn_82A94368();
extern int fn_82A947A0();
extern int fn_82A94AA8();
extern int fn_82A94F60();
extern int fn_82A98408();
extern int fn_82A98F18();
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_148;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_f4;


void fn_8284CB20(int param_1,int param_2)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iStack_150;
  int iStack_14c;
  unsigned int uStack_148;
  unsigned char auStack_140 [4];
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [4];
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_f4;
  unsigned char auStack_e0 [20];
  unsigned int uStack_cc;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  
  iStack_14c = 0;
  lVar4 = 0;
  iStack_150 = 0;
  iVar5 = 0;
  uStack_148 = 0;
  uVar6 = 0;
  if (param_2 == 1) {
    iVar5 = 1;
  }
  else if (param_2 == 2) {
    iVar5 = (*(unsigned int *)(*(int *)(param_1 + 0x34) + 0x2c) >> 6 & 0xf) + 1;
  }
  lVar1 = fn_82A94AA8(*(unsigned short *)(param_1 + 0x24),*(unsigned short *)(param_1 + 0x26),0);
  fn_82A94368(*(unsigned int *)(param_1 + 0x34),0,auStack_120);
  fn_82A947A0(*(unsigned int *)(param_1 + 0x34),auStack_e0);
  fn_8284C5C8(*(unsigned int *)(param_1 + 0x18),auStack_140);
  lVar9 = 0;
  if (iVar5 != 0) {
    do {
      iVar3 = 0;
      puVar8 = (unsigned int *)0x83157388;
      do {
        fn_8284C428(uStack_11c,uStack_118,lVar9,&iStack_14c,&iStack_150);
        if ((*(unsigned int *)(*(int *)(param_1 + 0x34) + 0x2c) & 0x3c0) != 0) {
          lVar4 = fn_82A94F60(*(unsigned short *)(param_1 + 0x24),*(unsigned short *)(param_1 + 0x26),1,
                                  lVar9,*(unsigned int *)(param_1 + 0x18) & 0x3f,
                                  *(unsigned int *)(param_1 + 0x18) >> 8 & 1,0);
        }
        iVar7 = (int)lVar1;
        iVar10 = (int)lVar9;
        if (iVar10 < iVar7) {
          iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_140,lVar9);
          lVar14 = (__int64)iVar2 * (__int64)iVar3;
          fn_8263C700(*(unsigned int *)(param_1 + 0x34),*puVar8,lVar9,auStack_130,0,0);
          uVar16 = fn_8284C528(uStack_11c,auStack_140,lVar9);
          uVar12 = (uVar16 & 0xffffffff) / (unsigned __int64)uStack_f4;
          uVar11 = (unsigned __int64)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                   (unsigned __int64)uStack_138;
          uVar13 = uVar12;
          uVar15 = uVar11;
        }
        else {
          iVar2 = fn_8284C6E0(uStack_11c,uStack_118,auStack_140,lVar1);
          lVar14 = (__int64)iVar2 * (__int64)iVar3;
          fn_8263C700(*(unsigned int *)(param_1 + 0x34),*puVar8,lVar1,auStack_130,0,0);
          uVar12 = (unsigned __int64)uStack_c0;
          uVar11 = (unsigned __int64)uStack_bc;
          uVar16 = (unsigned __int64)uStack_cc;
          uVar13 = (unsigned __int64)((uStack_13c + iStack_14c) - 1 & ~(uStack_13c - 1)) /
                   (unsigned __int64)uStack_13c;
          uVar15 = (unsigned __int64)((uStack_138 + iStack_150) - 1 & ~(uStack_138 - 1)) /
                   (unsigned __int64)uStack_138;
        }
        lVar14 = ((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x34) + 0x20) & 0xfffff000) +
                 (unsigned __int64)uStack_148 + lVar14;
        if ((*(unsigned int *)(param_1 + 0x18) & 0x100) != 0) {
          fn_82A98F18(lVar14,uVar16,0,lVar14,uVar12,uVar11,0,uStack_f4);
        }
        fn_82837DF0(lVar14 + lVar4,*(unsigned int *)(param_1 + 0x18),uVar13,uVar15,uVar16,uVar6);
        if ((*(unsigned int *)(param_1 + 0x18) & 0x100) != 0) {
          fn_82A98408(lVar14,uVar12,uVar11,0,lVar14,uVar16,0,uStack_f4);
        }
        lVar14 = lVar1;
        if (iVar10 < iVar7) {
          lVar14 = lVar9;
        }
        fn_8263C620(*(unsigned int *)(param_1 + 0x34),*puVar8,lVar14);
        puVar8 = puVar8 + 1;
        iVar3 = iVar3 + 1;
      } while ((int)puVar8 < -0x7cea8c60);
      if (iVar10 < iVar7) {
        iVar3 = fn_8284C628(uStack_11c,uStack_118,auStack_140,lVar9 + 1);
        uStack_148 = iVar3 * 6;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 1;
      uVar6 = -(unsigned __int64)!CARRY8(8 - uVar6,uVar6 ^ 0x80000000) & uVar6;
    } while ((int)lVar9 < iVar5);
  }
  return;
}

