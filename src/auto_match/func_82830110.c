extern unsigned int *auStack_1c;
extern int fn_82816968();
extern int fn_82830028();
extern int fn_82830088();
extern unsigned int uStack_20;


void fn_82830110(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char uStack_20;
  unsigned char auStack_1c [4];
  
  uVar1 = (int)(param_1[1] - *param_1) >> 5;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_82830088(auStack_1c,param_1,(param_2 & 0x7ffffff) * 0x20 + (unsigned __int64)*param_1);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_82816968(param_1,param_2 - (__int64)(int)uVar1);
    fn_82830028(param_1[1],param_2 - (__int64)((int)(param_1[1] - *param_1) >> 5),0,param_1 + 3,0
                  ,uStack_20);
    param_1[1] = (int)((param_2 - (__int64)((int)(param_1[1] - *param_1) >> 5) & 0xffffffff) << 5)
                 + param_1[1];
  }
  return;
}

