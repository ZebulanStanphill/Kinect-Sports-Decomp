extern int fn_824D2980();
extern int fn_82809868();


void fn_824D2888(int param_1)

{
  __int64 lVar1;
  double extraout_f1;
  double dVar2;
  
  lVar1 = fn_824D2980((double)*(float *)(*(int *)(param_1 + 0x3a00) + 0x240));
  if (lVar1 == 0) {
    dVar2 = extraout_f1;
    if (*(int *)(*(int *)(param_1 + 0x3a08) + 0x98) != 0) {
      dVar2 = (double)*(float *)(*(int *)(param_1 + 0x3a08) + 0x9c);
    }
  }
  else {
    dVar2 = (double)*(float *)(*(int *)(param_1 + 0x3a00) + 0x244);
  }
                    /* WARNING: Subroutine does not return */
  fn_82809868(dVar2);
}

