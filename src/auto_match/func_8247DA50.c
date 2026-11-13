extern int fn_8226D6A0();


void fn_8247DA50(int param_1)

{
  if ((*(float *)(param_1 + 0x24) <= *(float *)(param_1 + 0x30)) &&
     (*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18ec) != 0)) {
    fn_8226D6A0(*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18ec));
    *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18ec) = 0;
  }
  return;
}

