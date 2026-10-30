extern void *fn_8225C590();
extern void *fn_8225D9B8(void *, int);
extern int fn_823AB470();
extern void fn_8245CB70(int, int);
extern void RtlEnterCriticalSection(int);
extern void RtlLeaveCriticalSection(int);
void fn_8245B718(int param_1)
{
  int iVar3;
  int lVar4;

  iVar3 = 0;
  if (*(int *)(param_1 + 0x664) != 0) {
    lVar4 = 0;
    do {
      void *uVar1 = fn_8225C590();
      if (fn_8225D9B8(uVar1,lVar4) != 0 && fn_823AB470() != 0) {
        iVar3 = 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < 4);
  }
  else {
    iVar3 = 1;
  }
  RtlEnterCriticalSection(param_1);
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x588) != 0)) {
    if (*(int *)(param_1 + 0x6b4) != 0) {
      fn_8245CB70(param_1,1);
    }
    *(int *)(param_1 + 0x584) = 1;
  }
  *(int *)(param_1 + 0x588) = iVar3;
  RtlLeaveCriticalSection(param_1);
}
