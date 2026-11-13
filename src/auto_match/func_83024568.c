//BODY


void fn_83024568(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x100) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x108) == 0x11) {
    *(int *)(param_1 + 0x74) = 4;
  } else {
    *(int *)(param_1 + 0x74) = 1;
  }
  *(int *)(param_1 + 0x108) = 0x11;
  *(short *)(param_1 + 0x10e) = 0;
}
