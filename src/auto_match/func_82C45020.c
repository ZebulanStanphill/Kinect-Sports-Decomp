extern int fn_82C44FC0();
extern int fn_82C507A8();
extern unsigned int iStack_20;


unsigned __int64 fn_82C45020(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int aiStack_30 [4];
  int iStack_20;
  
  if (*(int *)(param_1 + 0x499c) < *(int *)(param_2 + 0xcc) >> (*(unsigned int *)(param_2 + 0x50c8) & 0x3f))
  {
    return 1;
  }
  if (*(int *)(param_1 + 0x49a4) < *(int *)(param_2 + 0xd0) >> (*(unsigned int *)(param_2 + 0x50c8) & 0x3f))
  {
    return 1;
  }
  fn_82C507A8(param_2,*(unsigned int *)(param_2 + 0xb0bc),*(unsigned int *)(param_2 + 0xb0c0),
               aiStack_30);
  uVar1 = *(unsigned int *)(param_2 + 0x567c);
  aiStack_30[0] = iStack_20 * 2 + aiStack_30[0];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      if (aiStack_30[0] * 2 < *(int *)(param_2 + 0xcc)) {
        return 1;
      }
      if (*(int *)(param_2 + 0xdc) !=
          ((*(int *)(param_2 + 0xcc) >> 1) + 1) * *(int *)(param_2 + 0x4fb0)) {
        return 1;
      }
      goto LAB_82c45118;
    }
    if (2 < uVar1) {
      return 1;
    }
  }
  if ((aiStack_30[0] < *(int *)(param_2 + 0xcc)) ||
     (*(int *)(param_2 + 0xdc) != *(int *)(param_2 + 0x4fb0) * (*(int *)(param_2 + 0xcc) + 1))) {
    return 1;
  }
LAB_82c45118:
  uVar2 = fn_82C44FC0(param_2);
  return uVar2;
}

