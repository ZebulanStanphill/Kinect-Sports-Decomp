extern int fn_82617BE8();


void fn_825C4D68(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    *(unsigned char *)(*piVar1 + 0x10) = 0;
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if (*piVar1 != 0) {
      fn_82617BE8(*piVar1,param_3);
    }
  }
  return;
}

