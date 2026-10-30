typedef unsigned int uint;
typedef int (*code)();
extern int *fn_82FF8ED8(int, int);
extern int *fn_82FAB9C0(int, int);
extern void fn_82FF86A8(int);
extern int *fn_830080D8(int);
extern void fn_83009ED8(void);
extern int *fn_8300AB88(int);
extern int lbl_832642E0;
extern int lbl_832645B0;
extern char lbl_8326434C[];
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
int fn_82FFAC60(int param_1, int param_2, int param_3)
{
  int *puVar2;
  int *piVar3;
  int uVar4;
  int uVar1;
  uVar4 = 1;
  puVar2 = fn_82FF8ED8(param_1 + 4, *(int *)(param_2 + 4));
  if (puVar2 == 0) {
    return 2;
  }
  uVar1 = *puVar2;
  piVar3 = fn_82FAB9C0(lbl_832642E0 + 4, uVar1);
  if (piVar3 == 0) {
    if (*(char *)(param_1 + 0x8c) == 0) {
      fn_83009ED8();
      lbl_832645B0 = 0;
    }
    RtlEnterCriticalSection(lbl_8326434C);
    piVar3 = fn_8300AB88(uVar1);
    if (piVar3 == 0) {
      uVar4 = 2;
    } else {
      uVar4 = (*(code)(*(int *)(*piVar3 + 0x154)))(piVar3, puVar2, *(int *)(param_2 + 4));
      if (uVar4 != 1) {
        (*(code)(*(int *)(*piVar3 + 8)))(piVar3);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (uVar4 != 1) goto L;
  }
  puVar2 = fn_830080D8(param_3 + 0x34);
  if (puVar2 != 0) {
    *puVar2 = (int)piVar3;
  }
  *(char *)(param_1 + 0x8c) = 1;
L:
  fn_82FF86A8(param_1 + 4);
  return uVar4;
}
