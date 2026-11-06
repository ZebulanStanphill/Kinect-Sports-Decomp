typedef struct { unsigned int p : 4; unsigned int f : 1; unsigned int q : 13; unsigned int t : 7; unsigned int r : 7; } Flags;
extern int fn_82ABE0E8();

int fn_82B189C0(void *param_1, int param_2)
{
  unsigned int iVar1;
  unsigned int iVar2;
  int r;

  for (iVar1 = *(unsigned int *)(param_2 + 0x40); iVar1 != 0; iVar1 = *(unsigned int *)(iVar1 + 0x40)) {
    if ((*(unsigned int *)(iVar1 + 0x24) & 1) != 0) {
      iVar2 = 0;
    } else {
      iVar2 = (*(unsigned int *)(iVar1 + 0x20) & 0xfffffffe) - 0x28;
    }
    if ((*(unsigned int *)(iVar2 + 8) & 0x3f80) == 0x2d00) {
      if ((unsigned char)((Flags *)(iVar2 + 8))->f) {
        return 1;
      }
      r = fn_82ABE0E8(iVar2, param_1);
      if (r == 3 || r == 4) {
        return 1;
      }
      if (r == 8 || r == 9) {
        return 0;
      }
    }
  }
  return 0;
}
