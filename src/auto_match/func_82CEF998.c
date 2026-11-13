extern int fn_82D00728();
extern unsigned int lbl_8323B46C;


unsigned __int64 fn_82CEF998(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = lbl_8323B46C;
  if (*param_1 != -0x2f) {
    RtlEnterCriticalSection(lbl_8323B46C);
    iVar2 = fn_82D00728();
    if (*param_1 != iVar2) {
      RtlLeaveCriticalSection(uVar1);
      return 0;
    }
    RtlLeaveCriticalSection(uVar1);
  }
  return 1;
}

