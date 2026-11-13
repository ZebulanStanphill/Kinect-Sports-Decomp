extern int fn_82C53960();
extern int fn_82C53970();


int * fn_82CABB00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82C53960(0x10,0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    *piVar1 = param_2;
    piVar1[1] = param_1;
    iVar2 = fn_82C53960((__int64)param_1 * (__int64)param_2,3);
    piVar1[3] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 2;
      if (piVar1[1] < 3) {
        iVar2 = 1;
      }
      piVar1[2] = iVar2;
      return piVar1;
    }
    fn_82C53970(piVar1);
  }
  return (int *)0x0;
}

