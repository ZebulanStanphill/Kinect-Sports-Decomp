extern int fn_82A1F560();
extern int fn_82A20688();
extern int fn_82A247C0();
extern int fn_82A25330();
extern unsigned int lbl_83219B9C;
extern unsigned int lbl_83219BF4;


void fn_82A250F8(int param_1)

{
  __int64 lVar1;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if ((*(unsigned int *)(param_1 + 0x14) & 0xc0000000) != 0xc0000000) {
    lbl_83219BF4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x24) + lbl_83219BF4;
    *(unsigned int *)(**(int **)(param_1 + 0xc) + 0xc) = *(unsigned int *)(param_1 + 0x2c);
    fn_82A1F560(lbl_83219B9C,*(unsigned int *)(param_1 + 0x20));
    lVar1 = *(__int64 *)(*(int *)(param_1 + 0x20) + 0x10);
    *(__int64 *)(param_1 + 0x28) = lVar1;
    if (lVar1 < (__int64)(unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0xc) + 8)) {
      *(unsigned int *)(param_1 + 8) = 0;
      *(int (***)())(param_1 + 0x10) = fn_82A25330;
      fn_82A20688(param_1);
      goto LAB_82a251b0;
    }
  }
  fn_82A247C0(param_1);
LAB_82a251b0:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

