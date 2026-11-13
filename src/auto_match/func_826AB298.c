extern int fn_826A9DB0();


__int64 fn_826AB298(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  if ((*param_1 == 0) ||
     (uVar1 = fn_826A9DB0(param_1,param_2,
                            *(unsigned int *)(*(int *)*param_2 + 0xc) & *(unsigned int *)(*param_1 + 4)),
     (int)uVar1 < 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (uVar1 & 0x7ffffff) * 0x20 + (unsigned __int64)*param_1 + 0x10;
  }
  return lVar2;
}

