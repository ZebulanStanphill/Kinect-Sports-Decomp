extern int fn_827C7150(int, unsigned int, int);
extern int fn_827C73F8(int, int);

int fn_827C7888(int param_1, short **param_2)
{
  int iVar1;
  int shift;
  int i;

  iVar1 = *(int *)(param_1 + 0x15c);
  shift = *(int *)(param_1 + 0x138);
  *(int *)(iVar1 + 0x10) = **(int **)(param_1 + 0x18);
  *(int *)(iVar1 + 0x14) = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(unsigned int *)(param_1 + 0xbc) != 0) && (*(unsigned int *)(iVar1 + 0x44) == 0)) {
    fn_827C73F8(iVar1, *(int *)(iVar1 + 0x48));
  }
  for (i = 0; i < *(int *)(param_1 + 0x100); i++) {
    fn_827C7150(iVar1, (short)(*param_2[i] >> (short)shift), 1);
  }
  **(int **)(param_1 + 0x18) = *(int *)(iVar1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x18) + 4) = *(int *)(iVar1 + 0x14);
  if (*(unsigned int *)(param_1 + 0xbc) != 0) {
    if (*(unsigned int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = *(int *)(param_1 + 0xbc);
      *(unsigned int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1U & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}
