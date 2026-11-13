extern int fn_82E94518();
extern int fn_82F655D8();
extern unsigned int lbl_821AAD20;


void fn_82E976F8(int param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x7814) != 0) {
    if (((*(int *)(param_1 + 0x77e8) != 0) && (*(int *)(param_1 + 0x781c) != 0)) &&
       (*(int *)(param_1 + 0x77f0) != 0)) {
      dVar3 = (double)fn_82F655D8((double)(__int64)*(int *)(param_1 + 0x77cc) /
                                        (double)(__int64)*(int *)(param_1 + 0x77d8),
                                        *(unsigned __int64 *)(param_1 + 0x77e0));
      fVar1 = (float)((dVar3 * -((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
                                 *(double *)(param_1 + 0x7850) *
                                 (double)(__int64)*(int *)(param_1 + 0x77d8) -
                                (double)(__int64)param_2)) /
                     (double)(__int64)*(int *)(param_1 + 0x77cc));
      goto LAB_82e978b4;
    }
    if ((*(int *)(param_1 + 0x7814) != 0) && (*(int *)(param_1 + 0x781c) != 0)) {
      fVar1 = (float)((double)(__int64)param_2 / (double)(__int64)*(int *)(param_1 + 0x560)) -
              (float)((*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838)) *
                     *(double *)(param_1 + 0x7850));
      goto LAB_82e978b4;
    }
  }
  if (*(int *)(param_1 + 0x77e8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x77f0) == 0) {
    return;
  }
  dVar3 = (double)fn_82F655D8((double)(__int64)*(int *)(param_1 + 0x77cc) /
                                    (double)(__int64)*(int *)(param_1 + 0x77d8),
                                    *(unsigned __int64 *)(param_1 + 0x77e0));
  fVar1 = (float)((dVar3 * (double)(__int64)param_2) / (double)(__int64)*(int *)(param_1 + 0x77cc)
                 );
LAB_82e978b4:
  if (lbl_821AAD20 < fVar1) {
    uVar2 = fn_82E94518(param_1);
    *(unsigned int *)(param_1 + 0x2a0) = uVar2;
  }
  return;
}

