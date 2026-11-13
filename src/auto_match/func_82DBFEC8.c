typedef unsigned char bool;


void fn_82DBFEC8(unsigned int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0xc)) {
    param_4 = param_4 + 1;
  }
  *(bool *)param_1 = param_4 << 7 <= (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0x14)) + -0x10;
  return;
}

