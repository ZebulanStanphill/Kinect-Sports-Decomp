extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82A2A370();
extern int fn_82A2B760();
extern int fn_82A33950();


unsigned int fn_82A2A580(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_40 [2];
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [24];
  
  if ((param_4 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82A33950(auStack_30,auStack_38,param_4);
  }
  iVar2 = NtCreateSemaphore(auStack_40,uVar1,param_2,param_3);
  if (iVar2 < 0) {
    fn_82A2B760();
    auStack_40[0] = 0;
  }
  else {
    uVar1 = 0xb7;
    if (iVar2 != 0x40000000) {
      uVar1 = 0;
    }
    fn_82A2A370(uVar1);
  }
  return auStack_40[0];
}

