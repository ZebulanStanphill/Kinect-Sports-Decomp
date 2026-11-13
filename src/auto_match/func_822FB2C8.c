extern int fn_822B83D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822FB2C8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uStack_30;
  
  puVar3 = (unsigned int *)(param_1 + 0x78);
  if (0xf < *(unsigned int *)(param_1 + 0x8c)) {
    puVar3 = (unsigned int *)*puVar3;
  }
  fn_8255FD70(&uStack_30,**(unsigned int **)(param_1 + 0x58),puVar3);
  iVar2 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  puVar3 = (unsigned int *)(iVar1 * 4 + (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
  uStack_30 = (__int64)iVar1;
  fn_822B83D0(*(unsigned int *)(param_1 + 0x54),*puVar3);
  *(unsigned int *)(param_1 + 0x94) = 1;
  if (iVar2 != 0) {
    fn_8265CA20(iVar2);
  }
  return;
}

