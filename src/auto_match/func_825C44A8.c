#define true 1
extern int fn_82522D98();
extern int fn_825FA440();


unsigned __int64 fn_825C44A8(int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_3 < 0) || (2 < param_3)) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  piVar4 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (piVar1 == (int *)0x0) {
LAB_825c450c:
      if (param_3 == 0) {
        uVar2 = *(unsigned int *)(param_2 + 4);
      }
      else {
        uVar2 = *(unsigned int *)(param_3 * 4 + -0x7ce3fc6c);
      }
      fn_825FA440(uVar2,param_4);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0xc);
      }
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0xc);
    }
    if (piVar1[1] == param_3) {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(8);
      }
      goto LAB_825c450c;
    }
    piVar3 = (int *)piVar1[2];
    piVar4 = piVar1;
  } while( true );
}

