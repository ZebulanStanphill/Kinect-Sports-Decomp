extern int fn_828B30E8();
extern int fn_828B3DF8();
extern int fn_828B4B00();


void fn_828B4BA8(int param_1,__int64 param_2)

{
  int *piVar1;
  int aiStack_30;
  
  param_2 = param_2 + 0x30;
  piVar1 = (int *)fn_828B3DF8(&aiStack_30,param_1 + 0x54,param_2);
  if (*piVar1 != *(int *)(param_1 + 0x58)) {
    fn_828B4B00(param_1,0,param_2);
  }
  fn_828B3DF8(&aiStack_30,param_1 + 0x44,param_2);
  if (aiStack_30 != *(int *)(param_1 + 0x48)) {
    fn_828B30E8(&aiStack_30,param_1 + 0x44);
  }
  return;
}

