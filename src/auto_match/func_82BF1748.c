extern int fn_82BE8AE0();
extern int fn_82BE8AF8();
extern int fn_82BF0EB0();
extern int fn_82BF1098();
extern unsigned int lbl_8322B224;


void fn_82BF1748(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0x15) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(iVar1 + 0xc) != 0)) &&
       (iVar1 = fn_82BF1098(param_1,*(unsigned int *)(iVar1 + 8),*(int *)(iVar1 + 0xc)), iVar1 == 0)
       ) {
      *(unsigned int *)(param_1 + 0x68) = 1;
      if (lbl_8322B224 != 0) {
        fn_82BE8AE0();
      }
      *(unsigned int *)(param_1 + 0x10) = 0x17;
      return;
    }
    if (lbl_8322B224 != 0) {
      fn_82BE8AF8();
    }
    fn_82BF0EB0(param_1);
  }
  return;
}

