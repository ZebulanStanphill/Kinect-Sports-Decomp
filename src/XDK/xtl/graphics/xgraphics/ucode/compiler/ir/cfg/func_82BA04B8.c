typedef struct { unsigned pad:22; unsigned partial:1; unsigned low:9; } WriteFlags;
extern int fn_82AB15D0();


void fn_82BA04B8(int param_1)

{
  if ((unsigned char)((WriteFlags *)(param_1 + 0xe4))->partial == 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","HasPartialWriteInput()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp",0x775);
  }
  *(unsigned int *)((*(int *)(param_1 + 0x14) + 0x3a) * 4 + param_1) = 0;
  *(unsigned int *)(param_1 + 0xe4) = *(unsigned int *)(param_1 + 0xe4) & 0xfffffdff;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}

