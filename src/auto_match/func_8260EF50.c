extern int fn_82539560();
extern unsigned int lbl_821CA460;


void fn_8260EF50(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  
  uVar1 = lbl_821CA460;
  if (*(int *)(param_3 + 0x18) == 0) {
    if ((param_5 != 1) && (param_5 != 3)) {
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)*(float *)(param_1 + 0x88),(double)*(float *)(param_3 + 4),
                   (double)*(float *)(param_3 + 8),(double)*(float *)(param_3 + 0x10),
                   (double)*(float *)(param_3 + 0x14));
    }
    uVar1 = *(unsigned int *)(param_3 + 0x14);
  }
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x60) + 0x1a8) + 100) = uVar1;
  return;
}

