extern int fn_82639F78();
extern int fn_8263A120();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_824F5038(int param_1)

{
  fn_82639F78(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x1c),0,0,1);
  fn_8263A120(lbl_8320A898,*(unsigned int *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x20) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x10),0x80000000);
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0,*(unsigned int *)(param_1 + 8),0x80000000);
}

