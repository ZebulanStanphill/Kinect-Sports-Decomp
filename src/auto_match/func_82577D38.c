extern int fn_82522ED8();
extern int fn_82573EE0();
extern int fn_825776F8();
extern int fn_82578F00();
extern int fn_825CB538();
extern int fn_8265C9E0();


void fn_82577D38(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  __int64 lVar12;
  
  if (*(int **)(param_2 + 0x8c0) == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(int (***)())(**(int **)(param_2 + 0x8c0) + 0x1c))();
  }
  uVar7 = fn_82573EE0(uVar6,0x18);
  puVar8 = (unsigned int *)fn_82573EE0(uVar6,0x26);
  if (puVar8 != (unsigned int *)0x0) {
    puVar2 = *(unsigned short **)(param_1 + 0x34);
    uVar10 = (unsigned __int64)*puVar8;
    iVar3 = *(int *)(puVar2 + 4);
    iVar4 = *(int *)(puVar2 + 2);
    uVar1 = *puVar2;
    if (0 < (int)*puVar8) {
      iVar11 = 0;
      do {
        if (((uVar7 & 0xffffffff) != 0) &&
           (*(int *)((int)uVar7 + 0x40) != *(int *)(iVar11 + puVar8[1]))) {
          fn_82578F00(param_1);
          uVar7 = 0;
        }
        if (*(int *)(iVar11 + puVar8[1]) < (iVar3 - iVar4) / (int)(unsigned int)uVar1) {
          fn_82578F00(param_1);
          uVar7 = 0;
        }
        uVar10 = uVar10 - 1;
        iVar11 = iVar11 + 0xa0;
      } while (uVar10 != 0);
    }
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82578F00(param_1,*(unsigned int *)((int)uVar7 + 0x40));
  }
  uVar5 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 4);
  if (*(unsigned int *)(*(int *)(param_1 + 0x34) + 8) != uVar5) {
    uVar7 = fn_8265C9E0(0xd0);
    if ((uVar7 & 0xffffffff) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_825CB538(uVar7,*(unsigned int *)(param_1 + 4),param_1,(unsigned __int64)uVar5 + 0x30,
                                1 << (*(unsigned int *)(param_1 + 0x40) & 0x3f));
    }
    *(unsigned int *)(param_1 + 0x3c) = uVar9;
  }
  puVar2 = *(unsigned short **)(param_1 + 0x38);
  if (puVar2 != (unsigned short *)0x0) {
    iVar3 = (int)(*(int *)(puVar2 + 4) - *(unsigned int *)(puVar2 + 2)) / (int)(unsigned int)*puVar2;
    lVar12 = (__int64)iVar3;
    if ((iVar3 != 0) && (uVar7 = (unsigned __int64)*(unsigned int *)(puVar2 + 2), 0 < iVar3)) {
      do {
        fn_825776F8(param_1,uVar7);
        lVar12 = lVar12 + -1;
        uVar7 = uVar7 + 0x1c;
      } while (lVar12 != 0);
    }
    fn_82522ED8(*(unsigned int *)(param_1 + 0x38));
    *(unsigned int *)(param_1 + 0x38) = 0;
  }
  return;
}

