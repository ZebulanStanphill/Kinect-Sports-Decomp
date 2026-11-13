void fn_82FEF600(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0xda) & 8) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0xda) = *(unsigned char *)(param_1 + 0xda) | 8;
                    /* WARNING: Could not recover jumptable at 0x82fef63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(param_1 + 0x68) + 0x78))
            (*(int **)(param_1 + 0x68),*(unsigned int *)(param_1 + 0x70),3,0);
  return;
}

