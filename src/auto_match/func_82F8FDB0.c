int * fn_82F8FDB0(int *param_1,int param_2)

{
  unsigned __int64 in_r0;
  
  if (*param_1 == 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  if ((*(unsigned int *)(*param_1 + 8) < (unsigned int)(param_1[1] + param_2 * 4)) ||
     ((unsigned int)(param_1[1] + param_2 * 4) < *(unsigned int *)(*param_1 + 4))) {
    trapWord(0x1f,in_r0,0x16);
  }
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}

