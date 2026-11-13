extern int fn_82E4FE40(unsigned int);


void fn_82F40C20(unsigned __int64 param_1,unsigned int param_2)

{
  if (param_2 != 0) {
    if (*(unsigned int *)(param_2 + 0x48) != 0) {
      fn_82E4FE40(*(unsigned int *)(param_2 + 0x48));
    }
    *(unsigned int *)(param_2 + 0x48) = 0;
    *(unsigned int *)(param_2 + 0x44) = 0;
  }
  return;
}

