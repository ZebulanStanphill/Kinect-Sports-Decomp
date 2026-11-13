void fn_828EDEB8(int *param_1,unsigned __int64 param_2)

{
  *(unsigned __int64 *)(param_1 + 0x6e) = param_2;
  *(unsigned char *)(param_1 + 0x6a) = 1;
                    /* WARNING: Could not recover jumptable at 0x828eded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 4))();
  return;
}

