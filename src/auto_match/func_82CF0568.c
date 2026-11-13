__int64 fn_82CF0568(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                      __int64 param_5)

{
  unsigned __int64 uVar1;
  
  uVar1 = (int)param_1 / (int)param_2 - param_4;
  trapWord(6,param_2,0);
  trapWord(6,param_3,0);
  trapWord(5,param_2 & ~((((unsigned __int64)param_1 & 0x7fffffff) << 1 | (unsigned __int64)(param_1 >> 0x1f)) - 1
                        ),0xffff);
  trapWord(5,param_3 & ~(((uVar1 & 0x7fffffff) << 1 | (uVar1 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return (int)uVar1 / (int)param_3 - param_5;
}

