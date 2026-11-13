unsigned int fn_82D8B9E8(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0xe8) != '\x04') && (*(unsigned char *)(param_1 + 0xe8) != '\x05')) {
    return 0;
  }
  return *(unsigned int *)(param_1 + 0x1f8);
}

