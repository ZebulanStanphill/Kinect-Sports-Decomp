extern int fn_82526B90();
extern int fn_82671AC8();
extern int fn_82671B90();
extern int fn_826737C8();


void fn_82673AA0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = fn_82526B90(param_2,0xffffffff82002d38);
  if (iVar2 == 0) {
    if ((*(unsigned int *)(param_3 + 4) >> 6 & 1) == 0) {
      uVar1 = *(unsigned int *)(param_3 + 8);
    }
    else {
      uVar1 = **(unsigned int **)(param_3 + 8);
    }
    fn_826737C8((double)(float)*(double *)(param_3 + 0x18),
                  (double)(float)*(double *)(param_3 + 0x28),
                  (double)(float)*(double *)(param_3 + 0x38),
                  (double)(float)*(double *)(param_3 + 0x48),param_1,uVar1);
  }
  else {
    iVar2 = fn_82526B90(param_2,0xffffffff82002d24);
    if (iVar2 == 0) {
      if ((*(unsigned int *)(param_3 + 4) >> 6 & 1) == 0) {
        uVar1 = *(unsigned int *)(param_3 + 8);
      }
      else {
        uVar1 = **(unsigned int **)(param_3 + 8);
      }
      fn_82671AC8((double)(float)*(double *)(param_3 + 0x18),
                    (double)(float)*(double *)(param_3 + 0x28),
                    (double)(float)*(double *)(param_3 + 0x38),
                    (double)(float)*(double *)(param_3 + 0x48),param_1,uVar1);
    }
    else {
      iVar2 = fn_82526B90(param_2,0xffffffff82002d0c);
      if (iVar2 == 0) {
        if ((*(unsigned int *)(param_3 + 4) >> 6 & 1) == 0) {
          uVar1 = *(unsigned int *)(param_3 + 8);
        }
        else {
          uVar1 = **(unsigned int **)(param_3 + 8);
        }
        fn_82671B90(param_1,uVar1);
      }
    }
  }
  return;
}

