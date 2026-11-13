void fn_828585F8(int param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x82858614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*(int *)(param_1 + 4) + *(int *)(param_2 + 4) + 0x40))
            (*(int *)(param_1 + 4),*(unsigned int *)(*(int *)(param_2 + 8) + param_3));
  return;
}

