void fn_82858618(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x82858630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*(int *)(param_1 + 4) + *(int *)(param_2 + 4) + 0x40))
            (*(int *)(param_1 + 4),*(unsigned int *)(param_2 + 8));
  return;
}

