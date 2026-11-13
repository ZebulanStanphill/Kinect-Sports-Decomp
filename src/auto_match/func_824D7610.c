extern int fn_824CCFC8();
extern unsigned int lbl_821914B0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824D7610(int param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  
  if ((*(int *)(param_1 + 0x118) != 0) && (iVar1 = fn_824CCFC8(), iVar1 != 0)) {
    dVar2 = (double)(**(int (***)())(**(int **)(param_1 + 0x118) + 0x14))();
    if ((*(int *)(param_1 + 0xf0) != 0) || ((double)ltcg_pool_0_0f < dVar2)) {
      if (dVar2 < (double)lbl_821CA460) {
        dVar2 = (double)lbl_821914B0;
        if (*(int *)(param_1 + 0xf4) == 0) {
          dVar2 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x118) + 0x30) *
                                  (double)ltcg_pool_0_0f + dVar2);
        }
        *param_2 = (float)dVar2;
        *(unsigned int *)(param_1 + 0xf0) = 0;
        *(unsigned int *)(param_1 + 0xf4) = 0;
        return 1;
      }
      *(unsigned int *)(param_1 + 0xf0) = 1;
      *(unsigned int *)(param_1 + 0xf4) = 1;
    }
  }
  return 0;
}

