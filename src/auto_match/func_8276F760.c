extern unsigned int lbl_820151C0;
extern unsigned int uStack_10;


double fn_8276F760(int param_1)

{
  unsigned int uStack_10;
  
  uStack_10 = 0x30;
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_10 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  }
  return (double)((float)(__int64)uStack_10 * lbl_820151C0);
}

