typedef unsigned int uint;
typedef unsigned __int64 U64;
extern void fn_83050528(int, int);
extern void fn_83055EF8(int, int);

void fn_83050E80(int param_1, int param_2)
{
  int iVar1;
  int uVar2;

  if (param_2 == 2) {
    uVar2 = 4;
  }
  else {
    if (((*(uint *)(param_1 + 0x74) & 0x10000000) == 0) &&
       (*(uint *)(param_1 + 0x94) != *(uint *)(param_1 + 0x68))) goto LAB_83050eec;
    uVar2 = 1;
    *(U64 *)(param_1 + 0x88) =
         *(U64 *)(param_1 + 0x80) - (uint)(*(uint *)(param_1 + 0x6c) * *(uint *)(param_1 + 0x20));
  }
  fn_83050528(param_1, uVar2);
LAB_83050eec:
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = (*(int *)(param_1 + 0x9c) << 3) >> 0x1c;
    if ((iVar1 != 2) && (iVar1 != 0)) {
      fn_83055EF8(*(int *)(param_1 + 0x60), param_1);
    }
  }
}
