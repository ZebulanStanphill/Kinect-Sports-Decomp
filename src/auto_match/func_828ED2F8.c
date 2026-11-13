extern unsigned int *auStack_10;
extern int fn_82CE16D8();


unsigned int  fn_828ED2F8(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned int auStack_10;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  auStack_10 = param_2;
  uVar1 = fn_82CE16D8(*(unsigned int *)(param_1 + 0x58),1,&auStack_10,0);
  return uVar1;
}

