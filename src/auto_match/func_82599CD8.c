extern int *piRam83296d40;
extern unsigned int *auStack_40;
extern int fn_82549610();
extern int fn_82549660();
extern int fn_82549798();
extern int fn_8259C738();
extern int fn_825B49E8();
extern int fn_82A1BB18();


void fn_82599CD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int auStack_40;

  if (((*(int *)(param_1 + 0x144) != 0) &&
      (piVar1 = *(int **)(param_1 + 0x14), piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
    fn_82549610(&auStack_40,0xffffffff83296d4c);
    if (piRam83296d40 == (int *)0x0) {
      fn_82549660(0x200000,1);
    }
    iVar2 = *piRam83296d40;
    fn_82A1BB18();
    fn_8259C738(auStack_40);
    if ((param_2 & 0xffffffff) <= (unsigned __int64)(unsigned int)(0x1000 << (iVar2 - 1U & 0x3f))) {
      iVar2 = piVar1[2];
      if (iVar2 == 0) {
        fn_82549610(&auStack_40,0xffffffff83296d4c);
        if (piRam83296d40 == (int *)0x0) {
          fn_82549660(0x200000,1);
        }
        iVar2 = fn_825B49E8(piRam83296d40,param_2);
        fn_82A1BB18();
        fn_8259C738(auStack_40);
      }
      else {
        piVar1[2] = 0;
      }
      if (iVar2 != 0) {
        return;
      }
    }
  }
  fn_82549798(param_2,param_3,0x404,0);
  return;
}
