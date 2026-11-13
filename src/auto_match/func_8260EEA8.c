extern int fn_82553D80();


void fn_8260EEA8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  if (param_5 == 0) {
    fn_82553D80((double)*(float *)(param_3 + 0x2c),(double)*(float *)(param_3 + 0x3c),
                      (double)*(float *)(param_3 + 0x40),(double)*(float *)(param_3 + 0x44),
                      (double)*(float *)(param_3 + 0x48),(double)*(float *)(param_3 + 0x4c),
                      (double)*(float *)(param_3 + 0x50),(double)*(float *)(param_3 + 0x54),
                      (double)*(float *)(param_3 + 0x58),(double)*(float *)(param_3 + 0x5c),
                      (double)*(float *)(param_3 + 0x60),(double)*(float *)(param_3 + 100),
                      (double)*(float *)(param_3 + 0x68),
                      *(unsigned int *)(**(int **)(param_1 + 0x60) + 0x1a8),
                      *(unsigned int *)(param_3 + 0x10),*(unsigned int *)(param_3 + 0x14),param_3 + 0x20
                      ,0,*(unsigned int *)(param_3 + 0x18),**(int **)(param_1 + 0x60),
                      *(unsigned int *)(param_3 + 0x1c));
  }
  else if ((param_5 == 1) || (param_5 == 3)) {
    *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x60) + 0x1a8) + 0x3f0) = 0;
  }
  return;
}

