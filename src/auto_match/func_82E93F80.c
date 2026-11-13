extern int fn_82F655D8();
extern int fn_82F65E20();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;


void fn_82E93F80(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0x77a8) == 0) {
    dVar1 = (double)fn_82F655D8((double)(__int64)*(int *)(param_1 + 0x77d8) /
                                      (double)(__int64)*(int *)(param_1 + 0x77cc),
                                      *(unsigned __int64 *)(param_1 + 0x77e0));
    dVar1 = -(dVar1 * (double)(__int64)param_3 - (double)(__int64)param_2) /
            ((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
            (double)(__int64)*(int *)(param_1 + 0x77d8));
    if (lbl_82005710 < dVar1) {
      *(double *)(param_1 + 0x7850) = dVar1;
      *(unsigned int *)(param_1 + 0x781c) = 1;
      *(unsigned int *)(param_1 + 0x77a8) = 1;
    }
  }
  else {
    dVar1 = (double)fn_82F65E20(-((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
                                   *(double *)(param_1 + 0x7850) *
                                   (double)(__int64)*(int *)(param_1 + 0x77d8) -
                                  (double)(__int64)param_2) / (double)(__int64)param_3);
    dVar2 = (double)fn_82F65E20((double)(__int64)*(int *)(param_1 + 0x77d8) /
                                 (double)(__int64)*(int *)(param_1 + 0x77cc));
    dVar1 = dVar1 / dVar2;
    if ((lbl_82015610 < dVar1) && (dVar1 < lbl_82015618)) {
      *(double *)(param_1 + 0x77e0) = dVar1;
      *(unsigned int *)(param_1 + 0x77f0) = 1;
      *(unsigned int *)(param_1 + 0x77a8) = 0;
    }
  }
  return;
}

