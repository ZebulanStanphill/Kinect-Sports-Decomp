extern unsigned int *auStack_30;
extern int fn_82A1E108();
extern int fn_82A1E740();
extern int fn_82E23118();
extern unsigned int lbl_83276598;


unsigned __int64 fn_8245E230(int param_1)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  unsigned int iVar3;
  unsigned char auStack_30 [1];
  
  iVar3 = param_1 + 0xe4;
  RtlEnterCriticalSection(iVar3);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = 0x15;
  }
  else {
    *(unsigned int *)(param_1 + 0x50) = 0;
    lbl_83276598 = 0;
    fn_82E23118(param_1 + 4);
    while (iVar1 = fn_82A1E740(param_1 + 0x5c,auStack_30,0), iVar1 != 0) {
      fn_82A1E108(1);
    }
    *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_1 + 0x60);
  }
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3);
  }
  return uVar2;
}

