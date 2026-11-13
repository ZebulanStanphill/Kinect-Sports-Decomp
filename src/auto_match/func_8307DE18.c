typedef unsigned char bool;


bool fn_8307DE18(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  lVar1 = (param_2 & 0x7fffffff) * 2;
  if ((*(unsigned int *)(param_1 + 4) & 0x20000) != 0) {
    return (*(unsigned int *)((int)((param_2 + lVar1 & 0xffffffff) << 5) + *(int *)(param_1 + 8)) >> 0x14 &
           3) == 0;
  }
  return (**(unsigned int **)((int)((param_2 + lVar1 & 0xffffffff) << 5) + *(int *)(param_1 + 8) + 0x40) >>
          0x14 & 3) == 0;
}

