extern int fn_82381BC0();
extern int fn_82A1C098();
extern int XMemSet();
extern unsigned int lbl_8327F640;


void fn_8225C7B8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *apuStack_30 [12];
  
  if (lbl_8327F640 != 0) {
    puVar1 = *(unsigned int **)(param_1 + 0x4c);
    apuStack_30[0] = (unsigned int *)*puVar1;
    while (apuStack_30[0] != puVar1) {
      iVar2 = apuStack_30[0][4];
      if (*(int *)(iVar2 + 0x408) == 0) {
        iVar4 = 0;
        lVar5 = -((unsigned __int64)(*(unsigned int *)(iVar2 + 0x40c) < 3) - 1);
        if ((lVar5 == 0) && (*(int *)(iVar2 + 1000) != 0x3e5)) {
          uVar3 = fn_82A1C098(iVar2 + 1000);
          uVar3 = (uVar3 & 0xffffffff) >> 0x1f;
          iVar4 = (int)uVar3;
          if ((uVar3 == 0) || (*(int *)(iVar2 + 0x40c) < 1)) {
            *(unsigned int *)(iVar2 + 0x408) = 1;
          }
        }
        if ((0 < *(int *)(iVar2 + 0x40c)) && ((iVar4 != 0 || ((int)lVar5 != 0)))) {
                    /* WARNING: Subroutine does not return */
          XMemSet(iVar2,0,1000);
        }
      }
      fn_82381BC0(apuStack_30);
      puVar1 = *(unsigned int **)(param_1 + 0x4c);
    }
  }
  return;
}

