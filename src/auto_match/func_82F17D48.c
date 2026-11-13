extern int fn_8265C990();


void fn_82F17D48(int param_1)

{
  if ((unsigned int)param_1 != 0) {
    if (*(unsigned int *)(param_1 + 0x44) != 0) {
      fn_8265C990(*(unsigned int *)(param_1 + 0x44),0x248c8000);
      *(unsigned int *)(param_1 + 0x44) = 0;
    }
    if (*(unsigned int *)(param_1 + 0x5c) != 0) {
      fn_8265C990(*(unsigned int *)(param_1 + 0x5c),0x248c8000);
      *(unsigned int *)(param_1 + 0x5c) = 0;
    }
    if (*(unsigned int *)(param_1 + 0x74) != 0) {
      fn_8265C990(*(unsigned int *)(param_1 + 0x74),0x248c8000);
      *(unsigned int *)(param_1 + 0x74) = 0;
    }
    *(unsigned int *)(param_1 + 0x40) = 0;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0x58) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned int *)(param_1 + 0x74) = 0;
  }
  return;
}

