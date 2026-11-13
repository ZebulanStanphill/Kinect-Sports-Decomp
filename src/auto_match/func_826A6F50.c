void fn_826A6F50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char param_4)

{
                    /* WARNING: Could not recover jumptable at 0x826a6f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(param_1 + 4) + 0x1c))
            (*(int **)(param_1 + 4),*(unsigned int *)(param_1 + 8),param_2,
             param_4 & ~*(unsigned char *)(param_1 + 0xd) | *(unsigned char *)(param_1 + 0xc));
  return;
}

