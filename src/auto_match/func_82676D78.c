extern int fn_82676C10();
extern int fn_8267A1C0();
extern int fn_8267AAC0();
extern unsigned int lbl_8200514C;


void fn_82676D78(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  *param_1 = &lbl_8200514C;
  if (param_1[10] != 0) {
    uVar1 = (unsigned __int64)(unsigned int)param_1[7];
    if (uVar1 == 0) {
      fn_8267A1C0(param_1 + 10);
    }
    else {
      RtlEnterCriticalSection(uVar1 + 0x2204);
      fn_82676C10(uVar1 + 0x21f8,param_1 + 10);
      RtlLeaveCriticalSection(uVar1 + 0x2204);
    }
  }
  if ((unsigned __int64)(unsigned int)param_1[7] != 0) {
    lVar2 = (unsigned __int64)(unsigned int)param_1[7] + 0x15c;
    RtlEnterCriticalSection(lVar2);
    if (param_1[3] != 0) {
      *(unsigned int *)(param_1[2] + 4) = param_1[3];
      *(unsigned int *)param_1[3] = param_1[2];
      param_1[2] = 0;
      param_1[3] = 0;
    }
    RtlLeaveCriticalSection(lVar2);
  }
  fn_8267AAC0(param_1);
  return;
}

