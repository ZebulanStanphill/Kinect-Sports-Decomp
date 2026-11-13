extern int fn_82897620();
extern int fn_82897B18();
extern int fn_82897BB0();
extern int fn_82897BD0();
extern int fn_82897BF0();


void fn_828996C8(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  puVar6 = (unsigned int *)(iVar5 + 0x10);
  lVar8 = 4;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    *(unsigned char *)(iVar5 + 0x34 + iVar7) = 1;
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  fn_82897BF0(uVar1);
  for (uVar3 = fn_82897BB0(uVar1); (uVar3 & 0xffffffff) != 0; uVar3 = fn_82897BD0(uVar3)) {
    uVar4 = fn_82897B18(uVar3);
    iVar5 = fn_82897620(*(unsigned int *)(param_1 + 0x1c),uVar4);
    piVar2 = *(int **)(iVar5 + 0x20);
    if (param_2 == -1) {
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(int (***)())(*piVar2 + 4))();
      }
      *(unsigned int *)(iVar5 + 0xc) = 3;
      *(unsigned int *)(iVar5 + 0x10) = 3;
      *(unsigned int *)(iVar5 + 0x14) = 3;
      *(unsigned int *)(iVar5 + 0x18) = 3;
    }
    else {
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(int (***)())(**(int **)(iVar5 + 0x20) + 4))();
      }
      *(unsigned int *)((param_2 + 3) * 4 + iVar5) = 3;
    }
  }
  return;
}

