extern int fn_8267C498();
extern unsigned int iStack_40;


void fn_826FB410(int *param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned char bStack_41;
  int iStack_40;
  
  if (*param_1 != 0) {
    iStack_40 = *param_2;
    if (iStack_40 != 0) {
      *(int *)(iStack_40 + 4) = *(int *)(iStack_40 + 4) + 1;
    }
    uVar7 = 0x1505;
    lVar9 = 4;
    iVar5 = 4;
    do {
      uVar7 = (unsigned int)(&bStack_41)[iVar5] + uVar7 * 0x1003f;
      lVar9 = lVar9 + -1;
      iVar5 = iVar5 + -1;
    } while (lVar9 != 0);
    if (iStack_40 != 0) {
      fn_8267C498();
    }
    iVar5 = *param_1;
    uVar7 = *(unsigned int *)(iVar5 + 4) & uVar7;
    iVar4 = uVar7 * 0xc + iVar5;
    if ((*(int *)(iVar4 + 8) != -2) && (*(unsigned int *)(iVar4 + 0xc) == uVar7)) {
      uVar1 = uVar7;
      uVar3 = 0xffffffff;
      while ((uVar6 = uVar1, puVar8 = (unsigned int *)(iVar4 + 8), *(unsigned int *)(iVar4 + 0xc) != uVar7 ||
             (*(int *)(iVar4 + 0x10) != *param_2))) {
        uVar1 = *puVar8;
        if (uVar1 == 0xffffffff) {
          return;
        }
        iVar4 = uVar1 * 0xc + iVar5;
        uVar3 = uVar6;
      }
      if (uVar7 == uVar6) {
        if (*puVar8 != 0xffffffff) {
          iVar5 = *puVar8 * 0xc + iVar5;
          if (*(int *)(iVar4 + 0x10) != 0) {
            fn_8267C498();
          }
          *puVar8 = 0xfffffffe;
          *puVar8 = *(unsigned int *)(iVar5 + 8);
          *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
          iVar2 = *(int *)(iVar5 + 0x10);
          if (iVar2 != 0) {
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          *(int *)(iVar4 + 0x10) = *(int *)(iVar5 + 0x10);
          puVar8 = (unsigned int *)(iVar5 + 8);
        }
      }
      else {
        *(unsigned int *)(uVar3 * 0xc + iVar5 + 8) = *puVar8;
      }
      if (puVar8[2] != 0) {
        fn_8267C498();
      }
      *puVar8 = 0xfffffffe;
      *(int *)*param_1 = *(int *)*param_1 + -1;
      return;
    }
  }
  return;
}

