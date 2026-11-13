extern int fn_82D93438();


__int64 fn_82DB15D8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82D93438(*(char *)(param_2 + 0x10) + param_2);
  return ((uVar1 & 0xffff) + (uVar1 & 0xffff) * 4) * 4 +
         (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x1c);
}

