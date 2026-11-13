extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern unsigned int lbl_8320A898;


void fn_824F4930(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lbl_8320A898;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x74) != '\x01')) {
    *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
    if (*(int *)(lbl_8320A898 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(lbl_8320A898 + 0x3148));
    }
    if (*(int *)(lbl_8320A898 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(lbl_8320A898 + 0x3158));
    }
    fn_8263A1B8(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x38));
    fn_8263A508(lbl_8320A898,0);
    fn_82631920(lbl_8320A898,*(unsigned int *)(param_1 + 0x1c));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(unsigned int *)(param_1 + 0x20));
  }
  return;
}

