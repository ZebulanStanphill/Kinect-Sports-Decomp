void fn_83055378(int param_1,unsigned __int64 param_2)

{
  if ((*(unsigned char *)(param_1 + 0xb8) & 0x80) == 0) {
    return;
  }
  if ((*(unsigned __int64 *)(*(int *)(param_1 + 0x60) + 0x98) < param_2) &&
     (*(unsigned __int64 *)(param_1 + 0xb0) >= param_2)) {
    return;
  }
  *(unsigned char *)(param_1 + 0xb8) = *(unsigned char *)(param_1 + 0xb8) & 0x7f;
  return;
}

