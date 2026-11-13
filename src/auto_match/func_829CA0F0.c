typedef struct { unsigned char b[0x34]; } B34_829CA0F0;

void fn_829CA0F0(int param_1, int param_2)
{
  char *iVar1;

  iVar1 = *(char **)(param_1 + 0x10);
  if (param_2 >= 0) {
    if (*(unsigned int *)(iVar1 + 0xec) != 0) {
      *(int *)(iVar1 + 0x134) = 0;
      *(int *)(iVar1 + 0xec) = 0;
    }
    if (*(unsigned int *)(iVar1 + 0x120) != 0) {
      *(int *)(iVar1 + 0x138) = 0;
      *(int *)(iVar1 + 0x120) = 0;
    }
    *(B34_829CA0F0 *)(iVar1 + 0x54) = *(B34_829CA0F0 *)(iVar1 + 0xbc);
    *(B34_829CA0F0 *)(iVar1 + 0x88) = *(B34_829CA0F0 *)(iVar1 + 0xf0);
    *(int *)(iVar1 + 0x124) = 0;
  }
  else {
    *(int *)(iVar1 + 0x124) = 0;
  }
}
