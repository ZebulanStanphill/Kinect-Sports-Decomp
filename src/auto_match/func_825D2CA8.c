extern int fn_8251E4D0();


void fn_825D2CA8(__int64 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  if ((param_2 != (int *)0x0) && (uVar3 = (unsigned __int64)(unsigned int)param_2[1], 0 < param_2[1])) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(iVar4 + *param_2);
      piVar2 = (int *)(**(int (***)())(*piVar1 + 0x44))(piVar1);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
                    /* WARNING: Subroutine does not return */
        fn_8251E4D0(param_1 + 0xc);
      }
      fn_825D2CA8(param_1,piVar1 + 0x26);
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 0x1a0;
    } while (uVar3 != 0);
  }
  return;
}

