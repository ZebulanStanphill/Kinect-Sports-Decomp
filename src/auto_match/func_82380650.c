extern int fn_82539560();


void fn_82380650(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1f8) == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar2 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)param_2,(double)(__int64)iVar2,(double)(__int64)iVar1,
               (double)*(float *)(param_1 + 0x58),(double)*(float *)(param_1 + 0x5c));
}

