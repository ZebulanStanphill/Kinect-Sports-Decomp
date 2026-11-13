extern int fn_8265C990();
extern int fn_82ED4510();


void fn_82ED4618(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_82ED4510(*(unsigned int *)(param_1 + 0x18),3);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    fn_8265C990(*(unsigned int *)(param_1 + 0x20),0x248c8000);
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x30) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  return;
}

