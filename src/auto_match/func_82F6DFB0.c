__int64 fn_82F6DFB0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = param_1 >> 0x30 & 0x7ff0;
  lVar2 = uVar1 - 0x7ff0;
  return lVar2 - ((uVar1 - 0x7ff1) + (unsigned __int64)(lVar2 == 0));
}

