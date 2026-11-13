extern unsigned int lbl_82002AE0;
extern unsigned int uRam83263180;


double fn_82F58C88(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return (double)lbl_82002AE0;
  }
  return (double)((float)(__int64)*(int *)(param_1 + 0x30) / (float)uRam83263180);
}

