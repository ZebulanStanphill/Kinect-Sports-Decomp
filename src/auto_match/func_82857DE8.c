unsigned __int64 fn_82857DE8(unsigned __int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (param_1 & 0xffffffff) >> 2;
  return (unsigned __int64)
         (-0x8000000000000000 >> ((((param_1 + param_2) - 1 & 0xffffffff) >> 2) - uVar1 & 0x7f)) >>
         (uVar1 & 0x7f);
}

