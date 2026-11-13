typedef struct { unsigned int pad : 25; unsigned int flag : 1; unsigned int rest : 6; } Bits;

int fn_82BD3228(int param_1)
{
  if (0 < *(int *)(param_1 + 0x10) &&
     ((unsigned char)((Bits *)(param_1 + 0xe4))->flag != 0 || *(int *)(param_1 + 0x50) == 0x1f)) {
    return 1;
  }
  return 0;
}
