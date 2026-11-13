extern int fn_82545810();
extern int fn_82578C70();
extern int fn_8262FEC8();
extern int fn_8263CBB0();
extern int fn_82645838();
extern int fn_8265CA20();
extern unsigned int lbl_8320A898;


void fn_82577C28(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xc);
  lVar2 = 8;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x84) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_8263CBB0(lbl_8320A898,6,0,0x2000000);
      }
      fn_8265CA20(iVar1);
      *piVar3 = 0;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  fn_82578C70(param_1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    fn_82545810(iVar1 + 0x58);
    fn_82545810(iVar1 + 0x60);
    fn_82545810(iVar1 + 0x5c);
    if (*(int *)(iVar1 + 0x68) != 0) {
      fn_8262FEC8();
      *(unsigned int *)(iVar1 + 0x68) = 0;
    }
    if (*(int *)(iVar1 + 0x6c) != 0) {
      fn_8262FEC8();
      *(unsigned int *)(iVar1 + 0x6c) = 0;
    }
    if (*(int *)(iVar1 + 100) != 0) {
      fn_82545810(iVar1 + 100);
    }
    if (*(int *)(iVar1 + 0xa0) != 0) {
      fn_82645838();
      fn_8262FEC8(*(unsigned int *)(iVar1 + 0xa0));
      *(unsigned int *)(iVar1 + 0xa0) = 0;
      *(unsigned int *)(iVar1 + 0xa4) = 0;
    }
    fn_8265CA20(iVar1);
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  return;
}

