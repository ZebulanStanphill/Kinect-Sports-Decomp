extern int fn_82D00728();
extern unsigned int lbl_8323B46C;


void fn_82CEF908(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = lbl_8323B46C;
  if (*param_1 != -0x2f) {
    RtlEnterCriticalSection(lbl_8323B46C);
    iVar2 = fn_82D00728();
    *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
    *(unsigned short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) << 1 | 1;
    if (*param_1 == -0xf) {
      *param_1 = iVar2;
    }
    RtlLeaveCriticalSection(uVar1);
  }
  return;
}

