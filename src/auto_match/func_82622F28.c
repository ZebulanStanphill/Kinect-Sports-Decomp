void fn_82622F28(int param_1,int *param_2,unsigned __int64 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x82622f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(*param_2 + 0x1ac) + 4))
            (*(int **)(*param_2 + 0x1ac),param_3,param_2[1],param_2[3] >> 1,
             param_2 + (*(int *)(param_1 + 0x10) + 3) * 4,
             (unsigned int)param_2[*(int *)(param_1 + 0x10) + 0x1e] >> 0x10 & 1,param_2[0x1c]);
  return;
}

