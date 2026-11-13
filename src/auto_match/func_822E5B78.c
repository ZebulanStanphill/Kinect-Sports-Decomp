extern int fn_822C72E0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822E5B78(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uStack_30;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x1e4);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x130) != 0)) &&
     (*(int *)(iVar2 + 0x134) == *(int *)(param_1 + 0x14))) {
    fn_8255FD70(&uStack_30,*(unsigned int *)(*(int *)(param_1 + 0x118) + 0x24),
                      0xffffffff821adee8);
    iVar2 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
    if ((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) != (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
                   ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
      puVar3 = (unsigned int *)(iVar1 * 4 + (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
      uStack_30 = (__int64)iVar1;
      fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20),*puVar3);
    }
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
    }
  }
  return;
}

