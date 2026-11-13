int fn_82E5C8D8(int param_1,unsigned short param_2)

{
  if ((param_2 != 0) && (param_2 <= 0x7f)) {
    *(unsigned short *)(param_1 + 0x70) = param_2;
    return 0;
  }
  return 0x80070057;
}

