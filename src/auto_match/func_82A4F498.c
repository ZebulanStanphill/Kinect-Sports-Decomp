extern int fn_82A68BB0();


__int64 fn_82A4F498(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_82A68BB0(*(unsigned short *)(param_1 + 6),*(unsigned short *)(param_1 + 4));
  return (__int64)(param_2 + 1) * (__int64)(int)(uVar1 & 0xffff) + -1;
}

