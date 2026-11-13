extern int fn_82631738();
extern int fn_82839000();
extern unsigned int iStack0000001c;
extern int (*lbl_8321130C)();
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


unsigned __int64 fn_82839198(unsigned int param_1,int param_2)

{
  int iVar1;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack_1c;
  unsigned int uStack_14;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  for (uStack_1c = 0; uStack_1c < *(unsigned int *)(param_2 + 0x20); uStack_1c = uStack_1c + 1) {
    fn_82839000(**(unsigned int **)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc));
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4) + 4) != 0) {
      fn_82631738(*(unsigned int *)
                         (*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4) + 4),
                        **(unsigned int **)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc + 4));
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x24) + uStack_1c * 0xc) + 4);
    for (uStack_14 = 0; (int)uStack_14 < *(int *)(iVar1 + 0x20); uStack_14 = uStack_14 + 1) {
      if ((*(int *)(*(int *)(iVar1 + 0x1c) + uStack_14 * 0x10 + 0xc) == 0) &&
         (lbl_8321130C != (int (**)())0x0)) {
        (*lbl_8321130C)(*(unsigned int *)(*(int *)(iVar1 + 0x1c) + uStack_14 * 0x10),
                        (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c) +
                        ((unsigned __int64)uStack_14 & 0xfffffff) * 0x10 + 0xc);
      }
    }
  }
  return 0;
}

