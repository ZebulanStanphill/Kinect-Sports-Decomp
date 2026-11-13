extern int fn_82631450();
extern int fn_82631738();
extern int fn_82631BF8();
extern unsigned int iStack_20;


void fn_82839050(int *param_1)

{
  unsigned int uVar1;
  int *piStack00000014;
  int iStack_20;
  
  piStack00000014 = param_1;
  for (iStack_20 = 0; iStack_20 < param_1[2]; iStack_20 = iStack_20 + 1) {
    fn_82631450(**(unsigned int **)(*param_1 + iStack_20 * 4),
                 *(unsigned int *)(param_1[1] + iStack_20 * 4));
  }
  for (iStack_20 = 0; iStack_20 < param_1[8]; iStack_20 = iStack_20 + 1) {
    uVar1 = fn_82631BF8(*(unsigned int *)(param_1[7] + iStack_20 * 4));
    **(unsigned int **)(param_1[6] + iStack_20 * 4) = uVar1;
  }
  for (iStack_20 = 0; iStack_20 < param_1[5]; iStack_20 = iStack_20 + 1) {
    fn_82631738(**(unsigned int **)(param_1[3] + iStack_20 * 4),
                      *(unsigned int *)(param_1[4] + iStack_20 * 4));
  }
  return;
}

