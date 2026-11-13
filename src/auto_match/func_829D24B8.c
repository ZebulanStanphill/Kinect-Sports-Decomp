extern unsigned int lbl_83215060;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_832170E0;
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B4;


unsigned __int64 fn_829D24B8(int *param_1)

{
  unsigned __int64 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else if (lbl_83215A40 == 0) {
    uVar1 = 0xffffffff83010002;
  }
  else if (lbl_832170E0 == 0) {
    uVar1 = 0xffffffff83010005;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8315c3cc);
    if (lbl_83215060 == 0) {
      lbl_832177B4 = ((((unsigned __int64)(lbl_832177B4)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(*param_1 - lbl_832177AC)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      if (*param_1 == 0) {
        lbl_832177B4 = ((((unsigned __int64)(lbl_832177B4)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      }
      lbl_832177B4 = ((((unsigned __int64)(lbl_832177B4)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(param_1[1] - lbl_832177AC)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      if (param_1[1] == 0) {
        lbl_832177B4 = ((((unsigned __int64)(lbl_832177B4)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      }
      RtlLeaveCriticalSection(0xffffffff8315c3cc);
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff8301000b;
      RtlLeaveCriticalSection(0xffffffff8315c3cc);
    }
  }
  return uVar1;
}

