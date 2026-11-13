typedef unsigned char bool;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_827450A8();
extern unsigned int uStack_80;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82745760(int param_1)

{
  unsigned int uVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned int **ppuVar5;
  unsigned int *puVar6;
  __int64 lVar4;
  int *piVar7;
  unsigned char *puVar8;
  char in_RESERVE;
  unsigned char bVar9;
  __int64 lVar10;
  unsigned int uStack_80;
  int aiStack_7c [3];
  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  unsigned int *puStack_68;
  unsigned int *puStack_64;
  int aiStack_60 [4];
  unsigned char auStack_50 [1];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [1];
  unsigned char auStack_20 [8];

  cVar3 = fn_82695468(param_1,0x11);
  if (cVar3 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eef4,0,0);
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar2 = 0;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      ppuVar5 = &puStack_70;
      lVar10 = 4;
      do {
        ppuVar5 = ppuVar5 + 4;
        *(unsigned char *)ppuVar5 = 0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_827450A8(uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,aiStack_60);
      fn_82696D38(&puStack_70,aiStack_60,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_6c,auStack_50,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_68,auStack_40,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_82696D38(&puStack_64,auStack_30,*(unsigned int *)(param_1 + 0x18),6,0);
      fn_8268B330(&uStack_80);
      fn_8268B610(&uStack_80,0xffffffff820127b8,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_70,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820127b0,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_6c,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820129f0,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_68,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff820129e4,0xffffffffffffffff);
      fn_8268B610(&uStack_80,*puStack_64,0xffffffffffffffff);
      fn_8268B610(&uStack_80,0xffffffff821c24f0,0xffffffffffffffff);
      fn_8269A190(aiStack_7c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                        &uStack_80);
      fn_82681838(*(unsigned int *)(param_1 + 4),aiStack_7c);
      lVar10 = (unsigned __int64)*(unsigned int *)(aiStack_7c[0] + 8) - 1;
      bVar9 = (lVar10 == 0) << 1;
      *(int *)(aiStack_7c[0] + 8) = (int)lVar10;
      if (lVar10 == 0) {
        fn_826944C8();
      }
      lVar10 = ((unsigned __int64)uStack_80 & 0xfffffffc) + 4;
      do {
        puVar6 = (unsigned int *)lVar10;
        uVar2 = (unsigned __int64)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar10);
          *puVar6 = uVar1;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if (uVar2 == 1) {
        fn_8267BE38();
      }
      piVar7 = aiStack_60;
      lVar10 = 3;
      do {
        piVar7 = piVar7 + -1;
        lVar4 = (unsigned __int64)*(unsigned int *)(*piVar7 + 8) - 1;
        *(int *)(*piVar7 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8();
        }
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      puVar8 = auStack_20;
      lVar10 = 3;
      do {
        puVar8 = puVar8 + -0x10;
        fn_82696330(puVar8);
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
  }
  return;
}
