unsigned char fn_8284C888(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x1c) == 4) {
    return *(unsigned char *)(param_1 + 0x50);
  }
  return 0;
}

