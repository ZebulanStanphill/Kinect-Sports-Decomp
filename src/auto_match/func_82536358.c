#define true 1
extern unsigned int *lbl_8327F874;


unsigned __int64 fn_82536358(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*lbl_8327F874;
  while( true ) {
    if (piVar2 == (int *)lbl_8327F874[1]) {
      return 0;
    }
    piVar1 = *(int **)(*piVar2 + 0x28);
    for (piVar3 = *(int **)(*piVar2 + 0x24); (piVar3 != piVar1 && (*piVar3 != param_1));
        piVar3 = piVar3 + 1) {
    }
    if (piVar3 != piVar1) break;
    piVar2 = piVar2 + 1;
  }
  return 1;
}

