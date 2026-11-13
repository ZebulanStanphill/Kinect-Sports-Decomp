static __forceinline void SetBit_82AA0750(unsigned *bits, unsigned n) { bits[n >> 5] |= 1u << (n & 31); }
extern int fn_82AB15D0();


void fn_82AA0750(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if ((void *)param_1 == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pAS_Object","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h",0x19b);
  }
  if (param_2 >= *(unsigned int *)(param_1 + 0x44)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","(SSM_UINT32)eState < pAS_Object->ASMapInfo.uNumStates","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h",0x19b);
  }
  if (*(unsigned int *)(*(int *)(param_1 + 0x50) + param_2 * 8) >= *(unsigned int *)(param_1 + 0x4c)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pAS_Object->ASMapInfo.pStateMap[eState].uBlockNum < pAS_Object->ASMapInfo.uNumStateBlks","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h",0x19b);
  }
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 1;
  *(unsigned int *)(*(int *)(param_1 + 8) + param_2 * 4) = param_3;
  SetBit_82AA0750(*(unsigned **)(param_1 + 0xc), *(unsigned *)(*(int *)(param_1 + 0x50) + param_2 * 8));
  return;
}

