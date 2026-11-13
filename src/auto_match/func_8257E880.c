extern int fn_82522D98();


void fn_8257E880(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_2 + 0x93c) + 0x10);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(0x84);
  }
  *(float *)(iVar2 + 0x78) = (float)param_1;
  return;
}

