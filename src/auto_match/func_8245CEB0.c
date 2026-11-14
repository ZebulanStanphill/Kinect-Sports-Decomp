extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int XMemSet();


void fn_8245CEB0(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *(int *)(param_1 + 4)) != 0) {
          fn_8265CA20();
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 4)) = 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar3 < *(unsigned int *)(param_1 + 0x10));
    }
    fn_8265CAA0(*(unsigned int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 4) = 0;
  }
  lVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7ffffff) << 5;
  if (0x7ffffff < *(unsigned int *)(param_1 + 0x10)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265CA60(lVar1);
  *(int *)(param_1 + 4) = (int)uVar2;
                    /* WARNING: Subroutine does not return */
  XMemSet(uVar2,0,*(int *)(param_1 + 0x10) << 5);
}

