void fn_83082890(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x14') {
    return;
  }
  if (*(char *)(param_1 + 0xd) != '\x02') {
    return;
  }
  *(unsigned char *)(param_1 + 0xc) = 0x1d;
  *(unsigned char *)(param_1 + 0xd) = 0;
  return;
}

