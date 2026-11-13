extern int memset();


void fn_82C2C240(int param_1)

{
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x1b8) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(unsigned int *)(param_1 + 0x164),0,(unsigned __int64)*(unsigned short *)(param_1 + 0x22) << 2);
}

