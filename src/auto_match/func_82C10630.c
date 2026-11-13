unsigned __int64 fn_82C10630(int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned __int64 uVar1;
  char cVar2;
  
  uVar1 = 7;
  do {
    if (*(int *)((int)((uVar1 + (uVar1 & 0x7fffffff) * 2 & 0xffffffff) << 2) + param_1) == 0) break;
    cVar2 = (char)uVar1 + '\x01';
    uVar1 = (unsigned __int64)cVar2;
  } while (cVar2 < '\x7f');
  if (0x7e < (int)uVar1) {
    return 0xffffffff805000b5;
  }
  *param_4 = (int)uVar1;
  *(unsigned int *)((int)((uVar1 + (uVar1 & 0x7fffffff) * 2 & 0xffffffff) << 2) + param_1) = 1;
  *(unsigned int *)(*param_4 * 0xc + param_1 + 4) = param_2;
  *(unsigned int *)(*param_4 * 0xc + param_1 + 8) = param_3;
  return 0;
}

