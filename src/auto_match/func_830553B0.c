unsigned __int64 fn_830553B0(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0xb8) & 0x80) != 0) {
    *(unsigned char *)(param_1 + 0xb8) = *(unsigned char *)(param_1 + 0xb8) & 0x7f;
    return 1;
  }
  return 0;
}

