extern int memcpy();


void fn_829D4B80(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  
  *(int *)(param_1 + 0x9c90) = (int)param_3;
  if ((param_3 & 0xffffffff) != 0) {
    puVar1 = (unsigned int *)(param_4 + -4);
    do {
      puVar1 = puVar1 + 1;
      memcpy(param_1,(unsigned __int64)*puVar1 * 0x7d4 + param_2,0x7d4);
      param_3 = param_3 - 1;
      param_1 = param_1 + 0x7d4;
    } while (param_3 != 0);
  }
  return;
}

