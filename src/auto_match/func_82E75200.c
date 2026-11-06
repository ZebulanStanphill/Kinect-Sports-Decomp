extern void fn_82BA02A8(unsigned int);
extern void fn_82E4FE40(unsigned int);
extern unsigned int fn_82E50BE8(int, int, int, int, int);
extern unsigned int fn_82EEAD70(unsigned int, int, unsigned long long);
extern int fn_82EEADA0(unsigned int, long long);
extern int fn_82EEADD8(int, unsigned int *);
extern int fn_82E41840(int, unsigned int);

int fn_82E75200(int param_1)
{
  unsigned int iVar1;
  unsigned int uVar2;
  int hr;
  unsigned int uStack_30;
  unsigned int flags;

  iVar1 = *(unsigned int *)(param_1 + 0x5c);
  flags = 0;
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_82E4FE40(iVar1);
  }
  *(int *)(param_1 + 0x5c) = 0;
  uVar2 = fn_82E50BE8(0x38, 0, 0, 0, 0);
  if (uVar2 != 0) {
    uVar2 = fn_82EEAD70(uVar2, *(int *)(param_1 + 0x18), (unsigned int)(*(int *)(param_1 + 0x1c) * 10000));
  }
  else {
    uVar2 = 0;
  }
  *(unsigned int *)(param_1 + 0x5c) = uVar2;
  if (uVar2 == 0) {
    hr = -0x7ff8fff2;
  }
  else {
    hr = fn_82EEADA0(uVar2, *(long long *)(param_1 + 0x28));
    if (hr >= 0) {
      uStack_30 = 0;
      hr = fn_82EEADD8(*(int *)(param_1 + 0x5c), &uStack_30);
      if (hr >= 0) {
        hr = (*(int (**)(int, unsigned int *))(**(int **)(param_1 + 0x10) + 0x14))(*(int *)(param_1 + 0x10), &flags);
        if (hr >= 0) {
          if ((flags & 1) != 0) {
            uStack_30 = uStack_30 | 1;
          }
          hr = fn_82E41840(*(int *)(param_1 + 0x5c), uStack_30);
          if (hr >= 0) {
            *(int *)(*(int *)(param_1 + 0x5c) + 0x34) = 0x72;
            return hr;
          }
        }
      }
    }
  }
  iVar1 = *(unsigned int *)(param_1 + 0x5c);
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_82E4FE40(iVar1);
  }
  *(int *)(param_1 + 0x5c) = 0;
  return hr;
}
