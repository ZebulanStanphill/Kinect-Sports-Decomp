extern int XNetGetTitleXnAddr();


void fn_8288A350(int param_1)

{
  unsigned int uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = XNetGetTitleXnAddr(param_1 + 4);
    *(unsigned int *)(param_1 + 0x2c) = uVar1;
    *(unsigned char *)(param_1 + 0x28) = 1;
  }
  return;
}

