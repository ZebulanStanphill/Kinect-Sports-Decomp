void fn_82B7C2A0(int *param_1,unsigned __int64 param_2,char param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  if ((int)param_2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x82b7c2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(*param_1 + 0xc))(param_1,param_3 == '\0',3,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82b7c2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0xc))(param_1,param_3 == '\0',1,param_2,param_4,param_5);
  return;
}

