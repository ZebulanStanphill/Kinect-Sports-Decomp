void fn_8303C2C0(int *param_1,unsigned char param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0x10010;
  }
  else {
    uVar1 = 0x11010;
  }
                    /* WARNING: Could not recover jumptable at 0x8303c2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 0x10))(param_1,uVar1);
  return;
}

