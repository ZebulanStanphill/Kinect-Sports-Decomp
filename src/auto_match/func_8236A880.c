extern int fn_824BD858();
extern int fn_824CD030();


void fn_8236A880(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x20));
  piVar1 = (int *)*piVar2;
  if (piVar2[1] - (int)piVar1 >> 2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((iVar3 != 0) && (iVar3 = fn_824CD030(), iVar3 != 0)) {
    param_1 = (param_3 + 0x1b) * 0x10 + param_1;
    fn_824BD858((double)*(float *)(param_1 + 8),(double)*(float *)(param_1 + 0xc));
  }
  return;
}

