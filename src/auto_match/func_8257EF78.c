extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_8257EF78(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 != 0) {
    dVar3 = (double)ltcg_pool_0_0f;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + -8) == 0) {
        dVar2 = dVar3;
        if ((double)*(float *)(param_2 + 0x838) <= dVar3) {
          dVar2 = (double)(*(float *)(param_2 + 0x820) * lbl_8327F894);
        }
        *(float *)(param_1 + 0xafc) = (float)((double)*(float *)(param_1 + 0xb00) * dVar2);
        (**(int (***)())(*(int *)(param_1 + -0x40) + 0x14))((int *)(param_1 + -0x40),param_2);
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8257EF78(*(int *)(param_1 + 8),param_2);
      }
      param_1 = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

