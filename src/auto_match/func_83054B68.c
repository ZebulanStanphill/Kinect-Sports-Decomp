extern void fn_83051330(int, unsigned __int64 *, unsigned int, unsigned int, int);
extern unsigned int fn_83054308(int);
extern void fn_83054920(int, unsigned int, unsigned __int64, int);
extern void fn_83056268(int);

void fn_83054B68(int param_1)
{
  unsigned int iVar1;
  unsigned __int64 lStack_20;

  if (*(unsigned int *)(param_1 + 0xb8) > 0 && (*(unsigned int *)(*(unsigned int *)(param_1 + 0xb0) + 0x30) & 0xe0000000) == 0x20000000) {
    iVar1 = *(unsigned int *)(param_1 + 0xb0);
    while (iVar1 != 0) {
        lStack_20 = *(unsigned __int64 *)(iVar1 + 0x10);
        fn_83051330(param_1, &lStack_20, *(unsigned int *)(iVar1 + 0x20), *(unsigned int *)(iVar1 + 0x1c), 1);
        fn_83054920(param_1, iVar1, *(unsigned int *)(iVar1 + 0x1c) + lStack_20, 1);
        fn_83056268(*(int *)(param_1 + 0x60));
        iVar1 = fn_83054308(param_1);
    }
  }
}
