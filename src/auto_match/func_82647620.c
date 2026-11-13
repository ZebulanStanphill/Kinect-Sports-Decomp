extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_82647620(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x3148);
  do {
    if (*piVar1 != *(int *)(param_1 + 0x3ac4)) {
      fn_8263A1B8(param_1,uVar2,0);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((uVar2 & 0xffffffff) < 4);
  if (*(int *)(param_1 + 0x3158) != *(int *)(param_1 + 0x3abc)) {
    fn_8263A508(param_1,0);
  }
  fn_82631920(param_1,0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(param_1,0);
}

