extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_828095F8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_82810BE8();
extern int fn_8305F778();
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_8217E6B0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_8305D990(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char auStack_b0 [1];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  dVar7 = (double)fn_82810BE8(param_1 + 0x34);
  if (((double)lbl_8201E038 < dVar7) && (dVar7 < (double)lbl_8217E6B0)) {
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    dVar7 = (double)lbl_821AAD20;
    if (0 < (int)uVar1) {
      iVar3 = 0;
      uVar5 = 0xffffffffffffffff;
      dVar9 = (double)lbl_8201DCB8;
      dVar10 = dVar7;
      do {
        uVar2 = uVar5 - 1;
        if ((__int64)uVar2 < 0) {
          uVar2 = (uVar5 + uVar1) - 1;
        }
        iVar6 = (int)uVar5;
        uVar4 = uVar5 + uVar1;
        if (-1 < iVar6) {
          uVar4 = uVar5;
        }
        fn_8305F778(*(unsigned int *)(param_1 + 0x28),
                     *(unsigned int *)((int)((uVar2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2c)),
                     auStack_80);
        fn_8305F778(*(unsigned int *)(param_1 + 0x28),
                     *(unsigned int *)((int)((uVar4 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2c)),
                     auStack_90);
        fn_8305F778(*(unsigned int *)(param_1 + 0x28),
                     *(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar3),auStack_70);
        fn_82810328(auStack_90,auStack_80,auStack_a0);
        fn_82810328(auStack_70,auStack_90,auStack_b0);
        dVar8 = (double)fn_82810BE8(auStack_a0);
        if (dVar8 < dVar9) {
          return 0;
        }
        dVar8 = (double)fn_82810BE8(auStack_b0);
        if (dVar8 < dVar9) {
          return 0;
        }
        fn_82810B78(auStack_a0,auStack_a0);
        fn_82810B78(auStack_b0,auStack_b0);
        fn_82810240(auStack_a0,auStack_b0,auStack_60);
        dVar8 = (double)fn_82810280(auStack_60,param_1 + 0x34);
        if (dVar8 <= dVar7) {
          fn_82810280(auStack_a0,auStack_b0);
          dVar8 = (double)fn_828095F8();
          dVar8 = dVar10 - dVar8;
        }
        else {
          fn_82810280(auStack_a0,auStack_b0);
          dVar8 = (double)fn_828095F8();
          dVar8 = dVar8 + dVar10;
        }
        dVar10 = (double)(float)dVar8;
        uVar5 = uVar5 + 1;
        uVar1 = *(unsigned int *)(param_1 + 0x30);
        iVar3 = iVar3 + 4;
      } while (iVar6 + 2 < (int)uVar1);
      if (dVar7 < dVar10) {
        return 1;
      }
    }
  }
  return 0;
}

