extern int fn_82CE1628();
extern unsigned int fn_82A1F470(unsigned int);


unsigned int  fn_828ED288(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int auStack_20 [2];
  unsigned __int64 auStack_18;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  auStack_20[0] = param_3 & 0xff;
  auStack_18 = param_2;
  uVar1 = fn_82CE1628(*(unsigned int *)(param_1 + 0x58),1,&auStack_18,auStack_20,0);
  if ((uVar1 & 0xffffffff) == 0x65b) {
    uVar1 = fn_82A1F470(uVar1);
  }
  return uVar1;
}

