__int64 fn_82A37838(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((int)param_2 < (int)param_1[0xc]) {
    uVar1 = param_1[0xb];
    trapWord(6,(unsigned __int64)uVar1,0);
    uVar2 = (int)(param_1[1] - *param_1) / 0x60 + param_2;
    return (uVar2 - (__int64)(int)((uVar2 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1)
           * 0x60 + (unsigned __int64)*param_1;
  }
  return 0;
}

