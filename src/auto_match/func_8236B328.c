extern int fn_823CC7A0();


unsigned __int64 fn_8236B328(int param_1,unsigned int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(((unsigned int)LZCOUNT(param_2) >> 3 & 4) + *(int *)(param_1 + 0x20));
  if ((piVar1[1] - *piVar1 & 0xfffffffcU) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_823CC7A0();
  }
  return 0;
}

