typedef unsigned char bool;


bool fn_825709D8(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 0xc);
  for (piVar2 = *(int **)(param_1 + 8); (piVar2 != piVar1 && (*piVar2 != param_2));
      piVar2 = piVar2 + 0xc) {
  }
  if (piVar2 != piVar1) {
    Function_825697C0(piVar2[1],param_3);
  }
  return piVar2 != piVar1;
}
