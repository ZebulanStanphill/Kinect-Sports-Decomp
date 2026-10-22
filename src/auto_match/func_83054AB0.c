typedef unsigned int uint;
typedef unsigned __int64 U64;
extern void fn_830503D0(int, U64 *, uint, uint, int);
extern uint fn_830542D8(int);
extern void fn_830547B8(int, uint, U64, int);
extern void fn_83056268(int);

void fn_83054AB0(int param_1)
{
  uint iVar1;
  U64 lStack_20;

  if (*(uint *)(param_1 + 0xa8) > 0 && (*(uint *)(*(uint *)(param_1 + 0xa0) + 0x30) & 0xe0000000) == 0x20000000) {
    iVar1 = *(uint *)(param_1 + 0xa0);
    while (iVar1 != 0) {
        lStack_20 = *(U64 *)(iVar1 + 0x10);
        fn_830503D0(param_1, &lStack_20, *(uint *)(iVar1 + 0x20), *(uint *)(iVar1 + 0x1c), 1);
        fn_830547B8(param_1, iVar1, *(uint *)(iVar1 + 0x1c) + lStack_20, 1);
        fn_83056268(*(int *)(param_1 + 0x60));
        iVar1 = fn_830542D8(param_1);
    }
  }
}
