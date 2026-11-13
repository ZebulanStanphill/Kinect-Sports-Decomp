extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826997B0();
extern int fn_826C6B78();
extern int fn_826CBFF0();
extern int fn_826D0488();
extern int fn_826DF960();
extern int fn_826E1D10();
extern int fn_8275C568();
extern unsigned int iStack_4c;
extern unsigned int iStack_60;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_826D0AE8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  char cVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  __int64 lVar12;
  unsigned int uVar13;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int *puStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x1b4);
  if (iVar7 != 0) {
    iVar11 = 0;
    uStack_58 = 0;
    uVar9 = 0;
    stack_pair_60.first = 0;
    uVar13 = 0;
    stack_pair_60.second = 0;
    if (*(int *)(iVar7 + 0xc) != 0) {
      lVar12 = 0;
      do {
        fn_826E1D10(&stack_pair_60.first,(unsigned __int64)*(unsigned int *)(iVar7 + 8) + lVar12);
        iVar7 = *(int *)(param_1 + 0x1b4);
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 4;
      } while (uVar13 < *(unsigned int *)(iVar7 + 0xc));
      uVar9 = (unsigned __int64)stack_pair_60.second;
    }
    puStack_50 = (unsigned int *)0x0;
    iStack_4c = 0;
    uVar10 = 0;
    uStack_48 = 0;
    iVar8 = stack_pair_60.first;
    puVar1 = puStack_50;
    puVar2 = puStack_50;
    iVar7 = iStack_4c;
    iVar3 = iStack_4c;
    if (uVar9 != 0) {
      do {
        iVar7 = *(int *)(iVar11 + iVar8);
        if (iVar7 != 0) {
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        }
        iVar7 = *(int *)(iVar11 + iVar8);
        cVar6 = (**(int (***)())(**(int **)(iVar7 + 8) + 0x14))();
        if (cVar6 == '\0') {
          if (*(int *)(iVar7 + 0xc) != 0) {
            fn_8275C568();
          }
          fn_826E1D10(&puStack_50,(int *)(iVar11 + iVar8));
          fn_826D0488(&stack_pair_60.first,uVar10);
          fn_826CBFF0(param_1,*(unsigned int *)(param_1 + 0xa0));
          uVar9 = (unsigned __int64)stack_pair_60.second;
          iVar8 = stack_pair_60.first;
        }
        else {
          uVar10 = uVar10 + 1;
          iVar11 = iVar11 + 4;
        }
        fn_8267C498(iVar7);
        puVar1 = puStack_50;
        puVar2 = puStack_50;
        iVar7 = iStack_4c;
        iVar3 = iStack_4c;
      } while ((uVar10 & 0xffffffff) < uVar9);
    }
    for (; iVar11 = iStack_4c, puVar4 = puStack_50, puStack_50 = puVar2, iStack_4c = iVar3,
        iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar5 = fn_826C6B78(param_1,*puVar1);
      if ((int)uVar5 != -1) {
        fn_826997B0((unsigned __int64)*(unsigned int *)(param_1 + 0x1b4) + 8,uVar5);
      }
      puVar1 = puVar1 + 1;
      puVar2 = puStack_50;
      iVar3 = iStack_4c;
      iStack_4c = iVar11;
      puStack_50 = puVar4;
    }
    fn_826DF960(puVar4,iVar11);
    fn_8267BE38(puVar4);
    fn_826DF960(iVar8,uVar9);
    fn_8267BE38(iVar8);
  }
  return;
}

