#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


unsigned __int64 fn_82F65C10(unsigned int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  trapWord(6,param_2,0);
  trapWord(6,param_2,0);
  trapWord(5,param_2 & ~((((unsigned __int64)param_1 & 0x7fffffff) << 1 | (unsigned __int64)(param_1 >> 0x1f)) - 1
                        ),0xffff);
  trapWord(5,param_2 & ~((((unsigned __int64)param_1 & 0x7fffffff) << 1 | (unsigned __int64)(param_1 >> 0x1f)) - 1
                        ),0xffff);
  return CONCAT44((int)param_1 / iVar1,param_1 - ((int)param_1 / iVar1) * iVar1);
}

