void fn_83032FD0(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x83032fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_2 + 4))(param_2);
  return;
}

