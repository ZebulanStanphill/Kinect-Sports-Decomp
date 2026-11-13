typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82359C18();
extern int fn_8250E2F8();
extern int fn_8250EFB0();
extern int fn_827F04B0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_821C23EC;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8250E678(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int *puVar9;
  __int64 lVar8;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned char **ppuStack_40;
  int (**pcStack_3c)();
  int iStack_38;
  int iStack_34;
  unsigned char ***pppuStack_30;
  
  uVar5 = fn_827F04B0(0x5e8);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    pppuStack_30 = &ppuStack_40;
    pcStack_3c = fn_8250EFB0;
    iStack_34 = iStack_38;
    ppuStack_40 = &lbl_821C23EC;
    iStack_38 = param_1;
    uVar6 = fn_8250E2F8(uVar5,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x34),
                          *(unsigned int *)(param_1 + 0x38),&ppuStack_40);
  }
  bVar10 = bVar1 << 1;
  *(unsigned int *)(param_1 + 0x14) = uVar6;
  if (!bVar1) {
    fn_82359C18(&ppuStack_40);
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x5dc);
  uVar6 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x5d8);
  if ((unsigned __int64)uVar2 != 0) {
    lVar7 = (unsigned __int64)uVar2 + 8;
    do {
      puVar9 = (unsigned int *)lVar7;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar7);
        *puVar9 = uVar4;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (ZEXT48(piVar3) != 0) {
    lVar7 = ZEXT48(piVar3) + 8;
    do {
      puVar9 = (unsigned int *)lVar7;
      lVar8 = (unsigned __int64)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar8,0,lVar7);
        *puVar9 = uVar4;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piVar3 + 4))();
    }
  }
  *(unsigned int *)(param_1 + 0x1c) = uVar2;
  *(unsigned int *)(param_1 + 0x18) = uVar6;
  return;
}

