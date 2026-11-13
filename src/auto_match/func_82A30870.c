extern unsigned int *auStack_2c;
extern int fn_82A2E6A8();
extern int fn_82A2F770();
extern unsigned int uStack_30;


unsigned __int64 fn_82A30870(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uStack_30;
  unsigned char auStack_2c [44];
  
  uVar1 = fn_82A2E6A8(param_1,param_2,param_3 - 1,&uStack_30,auStack_2c,0);
  if (-1 < (int)uVar1) {
    uVar1 = fn_82A2F770(param_1,uStack_30,1,0);
    if (-1 < (int)uVar1) {
      *(unsigned int *)(param_2 + 0x24) = uStack_30;
      uVar2 = (unsigned int)param_3;
      *(unsigned int *)(param_2 + 0x14) = uVar2;
      *(unsigned int *)(param_2 + 0x28) = 0xffffffff;
      if ((param_3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_2 + 0x18)) {
        *(unsigned int *)(param_2 + 0x18) = uVar2;
      }
      if ((param_3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_2 + 0x1c)) {
        *(unsigned int *)(param_2 + 0x1c) = uVar2;
      }
      uVar1 = 0;
      *(unsigned char *)(param_2 + 0x35) = *(unsigned char *)(param_2 + 0x35) | 0x10;
    }
  }
  return uVar1;
}

