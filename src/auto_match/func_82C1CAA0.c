extern int memset();


unsigned __int64 fn_82C1CAA0(int *param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned __int64 uVar1;
  int *in_r10;
  unsigned short *in_stack_00000054;

  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_3 == (unsigned int *)0x0)) ||
     ((param_2 != 0 && (param_4 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_1[0xad] == 3) {
      if (in_stack_00000054 != (unsigned short *)0x0) {
        if ((*in_stack_00000054 & 0x200) == 0) {
          param_1[0x67] = 0;
        }
        else {
          param_1[0x67] = 1;
        }
      }
      if (param_1[0x68] != 0) {
        param_1[0x67] = 1;
      }
      param_1[0xad] = 0;
                    /* WARNING: Subroutine does not return */
      memset(param_1[0x30],0,(unsigned __int64)*(unsigned short *)(*param_1 + 0x22) << 2);
    }
    uVar1 = 0xffffffff8004000a;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  if (((param_1[0xb0] != 0) && (param_1[0xae] != 0)) && (param_1[0xad] == 2)) {
    param_1[0xad] = ((unsigned int)LZCOUNT(param_1[0x38]) >> 5 ^ 1) + 1;
  }
  if (in_r10 != (int *)0x0) {
    *in_r10 = param_1[0xad];
  }
  return uVar1;
}
