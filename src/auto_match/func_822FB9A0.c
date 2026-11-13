extern int fn_822B83D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82F63108();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822FB9A0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uStack_30;
  
  puVar3 = (unsigned int *)(param_1 + 0x5c);
  if (0xf < *(unsigned int *)(param_1 + 0x70)) {
    puVar3 = (unsigned int *)*puVar3;
  }
  fn_8255FD70(&uStack_30,**(unsigned int **)(param_1 + 0x58),puVar3);
  iVar1 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  if (*(int *)(param_1 + 0x90) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    uStack_30 = (__int64)iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x90) + 4))
                      (*(int **)(param_1 + 0x90),(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2);
  }
  fn_822B83D0(*(unsigned int *)(param_1 + 0x54),*(unsigned int *)(iVar2 * 4 + iVar1));
  if (iVar1 != 0) {
    fn_8265CA20(iVar1);
  }
  return;
}

