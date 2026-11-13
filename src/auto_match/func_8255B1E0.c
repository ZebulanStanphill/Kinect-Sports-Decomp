extern int fn_8251E4D0();
extern int fn_8251E530();
extern int fn_82566E58();


void fn_8255B1E0(int param_1)

{
  if (*(int *)(param_1 + 0x358) != 0) {
    fn_82566E58(**(unsigned int **)(param_1 + 0x10),param_1);
    fn_8251E530(param_1 + 0x10,*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x358) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_8251E4D0(param_1 + 0x10);
}

