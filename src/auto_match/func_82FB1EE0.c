extern int fn_82FFF908();
extern int fn_82FFF990();


unsigned __int64 fn_82FB1EE0(int param_1,int param_2,char param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (piVar2 = *(int **)(param_1 + 0xc);
        (piVar2 != *(int **)(param_1 + 0x10) && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
    }
    if (piVar2 != *(int **)(param_1 + 0x10)) {
      if (param_3 != '\0') {
        uVar1 = fn_82FFF908();
        return uVar1;
      }
      fn_82FFF990(piVar2[1]);
    }
  }
  return 1;
}

