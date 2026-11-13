extern __int64 fn_82C3C340();


__int64 fn_82C3C4E8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82C3C340(param_2,param_3,param_1,0);
  return (uVar1 & 0xfffffff) * 0x10 + uVar1;
}

