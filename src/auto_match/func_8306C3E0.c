extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82A2B760();
extern int fn_82A33950();


unsigned int fn_8306C3E0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_30 [2];
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [16];
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82A33950(auStack_20,auStack_28);
  }
  iVar2 = NtCreateTimer(auStack_30,uVar1,param_2 == 0);
  if (iVar2 < 0) {
    fn_82A2B760();
    auStack_30[0] = 0;
  }
  else {
    uVar1 = 0xb7;
    if (iVar2 != 0x40000000) {
      uVar1 = 0;
    }
    thunk_FUN_82a2b748(uVar1);
  }
  return auStack_30[0];
}

