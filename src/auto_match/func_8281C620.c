extern void *memcpy(void *, const void *, unsigned int);
typedef struct B_8281C620 { char pad[0x4]; unsigned int f4; } B_8281C620;
void fn_8281C620(int param_1,int *param_2,unsigned int *param_3)
{
  unsigned int iVar1;
  unsigned int base;
  unsigned int n;

  if (*(unsigned int *)(param_1 + 0x20) == 0) {
    base = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x1c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      base = *(unsigned int *)(*(int *)(param_1 + 0x20) + 4);
    }
    else {
      base = *(unsigned int *)(iVar1 + 0x11) + *(unsigned int *)(iVar1 + 0xd);
    }
  }
  n = *(unsigned int *)(param_1 + 0x24) < *param_3 ? *(unsigned int *)(param_1 + 0x24) : *param_3;
  memcpy((void *)(base + *(unsigned int *)(param_1 + 0x10)), (void *)*param_2, n);
  *(unsigned int *)(param_1 + 0x10) = n + *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - n;
  *param_2 = *param_2 + n;
  *param_3 = *param_3 - n;
}
