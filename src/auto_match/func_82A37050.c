extern int fn_82A1E9A0();


void fn_82A37050(int (**param_1)(),unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  fn_82A1E9A0(1);
  uVar1 = (*param_1)(param_2);
  fn_82A1E9A0(0);
                    /* WARNING: Subroutine does not return */
  ExTerminateThread(uVar1);
}

