extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_826E6E40();
extern int inflateEnd();
extern unsigned int lbl_8200D660;


void fn_826E71C8(int *param_1)

{
  unsigned int *piVar1;
  
  *param_1 = &lbl_8200D660;
  if ((unsigned)param_1[2] != 0) {
    fn_826E6E40(param_1[2]);
    inflateEnd((unsigned int)param_1[2] + 4);
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        fn_8267C4F0(*piVar1);
      }
      fn_8267BE38(piVar1);
    }
  }
  fn_8267C488(param_1);
  return;
}

