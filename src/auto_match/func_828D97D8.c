typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82886518();
extern int fn_8288C1B8();
extern int fn_8288CBD8();
extern int fn_82897BD0();
extern int fn_828AECC0();
extern int fn_828B0488();
extern int fn_828B04D0();
extern int fn_828B0528();
extern int fn_828B0ED0();
extern int fn_828B1468();
extern int fn_828B1538();
extern int fn_828BE158();
extern int fn_828C8008();
extern int fn_82A4AAA8();
extern unsigned int iStack_70;
extern unsigned int uStack_58;


void fn_828D97D8(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  char cVar12;
  int iVar11;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iStack_70;
  int aiStack_6c [3];
  unsigned int *puStack_60;
  unsigned int *puStack_5c;
  unsigned int uStack_58;
  
  cVar12 = fn_828B0528(*(unsigned int *)(param_1 + 0x14));
  if ((cVar12 == '\0') || (iVar11 = fn_828B0488(param_1), iVar11 == 0)) {
LAB_828d9a34:
    fn_828B1468(param_1,7);
    return;
  }
  if (*(char *)(iVar11 + 0x26) == '\0') {
    iVar11 = fn_828B0ED0((unsigned __int64)*(unsigned int *)(iVar11 + 0x4c) + 0x38,0,0);
    if (iVar11 == 0) {
      fn_828B04D0(*(unsigned int *)(param_1 + 0x14),1);
      fn_828B1468(param_1,0);
      return;
    }
    if (param_2 < 0x1d4d) {
      return;
    }
    goto LAB_828d9a34;
  }
  puStack_60 = (unsigned int *)0x0;
  puStack_5c = (unsigned int *)0x0;
  uStack_58 = 0;
  fn_8288C1B8(&puStack_60,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x234));
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x230);
  aiStack_6c[0] = *piVar1;
  if ((int *)aiStack_6c[0] != piVar1) {
    do {
      iStack_70 = *(int *)(aiStack_6c[0] + 0x10);
      if ((*(unsigned int *)(iStack_70 + 0x4c) == 0) ||
         (iVar11 = fn_828B0ED0((unsigned __int64)*(unsigned int *)(iStack_70 + 0x4c) + 0x38,0,0), iVar11 != 6
         )) {
        fn_8288CBD8(&puStack_60,&iStack_70);
      }
      fn_82381BC0(aiStack_6c);
    } while (aiStack_6c[0] != *(int *)(*(int *)(param_1 + 0x14) + 0x230));
  }
  puVar7 = puStack_5c;
  puVar6 = puStack_60;
  bVar4 = false;
  if (((int)puStack_5c - (int)puStack_60 & 0xfffffffcU) != 0) {
    puVar5 = puStack_60;
    if (param_2 < 0x157c) goto LAB_828d99a8;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
      uVar2 = *puVar5;
      iVar11 = fn_82A4AAA8(uVar2);
      if (iVar11 != 2) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x230);
        aiStack_6c[0] = *piVar1;
        if ((int *)aiStack_6c[0] != piVar1) {
          do {
            uVar3 = *(unsigned int *)(aiStack_6c[0] + 0x10);
            uVar8 = fn_8265C9E0(0x90);
            if ((uVar8 & 0xffffffff) == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = fn_823AA970(uVar2);
              uVar9 = fn_828C8008(uVar8,3,uVar9,0x10);
            }
            fn_82886518(uVar9,0xffffffffffffffff,0xffffffffffffffff);
            uVar10 = fn_82897BD0(uVar3);
            fn_828BE158(*(unsigned int *)(param_1 + 0x14),uVar9,uVar10,0);
            fn_82381BC0(aiStack_6c);
          } while (aiStack_6c[0] != *(int *)(*(int *)(param_1 + 0x14) + 0x230));
        }
        fn_828AECC0(uVar2,2);
      }
    }
  }
  bVar4 = true;
LAB_828d99a8:
  if (bVar4) {
    fn_828B1538(param_1);
    fn_828B04D0(*(unsigned int *)(param_1 + 0x14),1);
    fn_828B1468(param_1,0);
  }
  if (puVar6 == (unsigned int *)0x0) {
    return;
  }
  fn_8265CA20(puVar6);
  return;
}

