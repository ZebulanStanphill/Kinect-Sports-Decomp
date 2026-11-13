char * fn_82E09D60(int param_1)

{
  if (*(char *)(param_1 + 0x28) != -1) {
    return (char *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    return "Havok-3.0.0";
  }
  return *(int *)(param_1 + 0xc) == 2 ? "Havok-3.1.0" : 0;
}

