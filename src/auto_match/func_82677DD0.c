extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82631920();


void fn_82677DD0(int param_1)

{
  __int64 lVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    fn_82631920(*(int *)(param_1 + 0xd8),0);
                    /* WARNING: Subroutine does not return */
    fn_82631578(*(unsigned int *)(param_1 + 0xd8),0);
  }
  piVar2 = (int *)(param_1 + 0x28);
  lVar1 = 0x13;
  do {
    if (*piVar2 != 0) {
      if (*piVar2 != 0) {
        fn_8262FEC8();
      }
      *piVar2 = 0;
      if (piVar2[0x13] != 0) {
        fn_8262FEC8();
      }
      piVar2[0x13] = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  piVar2 = (int *)(param_1 + 0xc0);
  lVar1 = 5;
  do {
    if (*piVar2 != 0) {
      if (*piVar2 != 0) {
        fn_8262FEC8();
      }
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  return;
}

