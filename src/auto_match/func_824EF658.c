extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;


void fn_824EF658(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lbl_8320A898;
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0xd54), iVar2 != 0)) {
    *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(iVar2 + 0x48));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(unsigned int *)(iVar2 + 0x70));
  }
  return;
}

