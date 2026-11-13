extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;


void fn_8284F3C0(double param_1,int param_2)

{
  if (*(int *)(*(int *)(param_2 + 0x80) + 0x48) < 2) {
    return;
  }
  *(float *)(param_2 + 0x8c) =
       (float)(param_1 * (double)lbl_82005344 + (double)lbl_82002AE0) * *(float *)(param_2 + 0xb4) *
       0.5f;
  return;
}

