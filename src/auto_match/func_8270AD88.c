__int64 fn_8270AD88(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned short *)(param_2 + 0x1e);
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(unsigned int *)(param_1 + 0x50) - uVar2;
  }
  return *(unsigned int *)(param_2 + 0x14) + uVar2 + lVar1 +
         (-(unsigned __int64)
           ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) ==
           (unsigned __int64)*(unsigned int *)(param_2 + 0xc) + (unsigned __int64)*(unsigned int *)(param_1 + 8)) &
         (unsigned __int64)*(unsigned int *)(param_1 + 8));
}

