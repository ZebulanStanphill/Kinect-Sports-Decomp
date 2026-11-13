typedef unsigned char bool;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826979D0();
extern int fn_8269A190();
extern int fn_827418A8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82741E88(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int **ppuVar7;
  unsigned int *puVar8;
  __int64 lVar6;
  int *piVar9;
  unsigned char *puVar10;
  char in_RESERVE;
  unsigned char bVar11;
  __int64 lVar12;
  unsigned int auStack_d0;
  unsigned char auStack_c0 [16];
  int aiStack_b0 [4];
  unsigned int *puStack_a0;
  unsigned int *puStack_9c;
  unsigned int *puStack_98;
  unsigned int *puStack_94;
  unsigned int *puStack_90;
  unsigned int *puStack_8c;
  int aiStack_88 [1];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [1];

  cVar5 = fn_82695468(param_1,0xf);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ef08,0,0);
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    if ((uVar3 & 0xffffffff) != 0) {
      ppuVar7 = &puStack_90;
      lVar12 = 6;
      do {
        ppuVar7 = ppuVar7 + 4;
        *(unsigned char *)ppuVar7 = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fn_827418A8(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,auStack_80);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_80,uVar1,0);
      fn_82696D38(&puStack_a0,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_70,uVar1,0);
      fn_82696D38(&puStack_9c,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_60,uVar1,0);
      fn_82696D38(&puStack_98,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_50,uVar1,0);
      fn_82696D38(&puStack_94,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_40,uVar1,0);
      fn_82696D38(&puStack_90,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826979D0(auStack_c0,auStack_30,uVar1,0);
      fn_82696D38(&puStack_8c,uVar4,uVar1,6,0);
      fn_82696330(auStack_c0);
      fn_8268B330(&auStack_d0);
      fn_8268B610(&auStack_d0,0xffffffff82012648,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_a0,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff82012640,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_9c,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff82012638,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_98,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff82012630,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_94,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff82012628,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_90,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff82012620,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,*puStack_8c,0xffffffffffffffff);
      fn_8268B610(&auStack_d0,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(aiStack_b0,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &auStack_d0);
      fn_82681838(*(unsigned int *)(param_1 + 4),aiStack_b0);
      lVar12 = (unsigned __int64)*(unsigned int *)(aiStack_b0[0] + 8) - 1;
      bVar11 = (lVar12 == 0) << 1;
      *(int *)(aiStack_b0[0] + 8) = (int)lVar12;
      if (lVar12 == 0) {
        fn_826944C8();
      }
      lVar12 = ((unsigned __int64)auStack_d0 & 0xfffffffc) + 4;
      do {
        puVar8 = (unsigned int *)lVar12;
        uVar3 = (unsigned __int64)*puVar8;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar3 - 1,0,lVar12);
          *puVar8 = uVar2;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
      if (uVar3 == 1) {
        fn_8267BE38();
      }
      piVar9 = aiStack_88;
      lVar12 = 5;
      do {
        piVar9 = piVar9 + -1;
        lVar6 = (unsigned __int64)*(unsigned int *)(*piVar9 + 8) - 1;
        *(int *)(*piVar9 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8();
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
      puVar10 = auStack_20;
      lVar12 = 5;
      do {
        puVar10 = puVar10 + -0x10;
        fn_82696330(puVar10);
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
  }
  return;
}
