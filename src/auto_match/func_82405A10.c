extern int fn_8229A000();
extern int fn_82405C30();
extern int fn_82405D70();
extern int fn_82539560();
extern unsigned int ltcg_pool_0_0f;


void fn_82405A10(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  *(float *)(param_2 + 0x38) = (float)((double)*(float *)(param_2 + 0x38) - param_1);
  (**(int (***)())(**(int **)(*(int *)(param_2 + 0x30) * 8 + *(int *)(param_2 + 0x1c)) + 4))();
  fVar3 = ltcg_pool_0_0f;
  if (ltcg_pool_0_0f < *(float *)(param_2 + 0x38)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
    *(float *)(param_2 + 0x34) = fVar1;
    if (fVar1 <= fVar3) {
      fn_8229A000(param_2 + 0x110);
    }
    *(float *)(param_2 + 0x44) = (float)((double)*(float *)(param_2 + 0x44) + param_1);
    if (*(int *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)*(float *)(param_2 + 0x38),(double)*(float *)(param_2 + 0x90),
                   (double)*(float *)(param_2 + 0x94),(double)*(float *)(param_2 + 0x98),
                   (double)*(float *)(param_2 + 0x9c));
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x30) * 8 + *(int *)(param_2 + 0x1c)) + 0xc);
    if (iVar2 == 0) {
      fn_82405C30(param_2);
      return;
    }
    if (iVar2 != 1) {
      return;
    }
  }
  fn_82405D70(param_2);
  return;
}

