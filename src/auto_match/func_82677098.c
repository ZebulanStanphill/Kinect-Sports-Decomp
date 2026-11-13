extern int fn_8263CBB0();
extern int fn_8267A5F0();


void fn_82677098(int param_1,__int64 param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_8267A5F0();
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0xd8),param_2,
                    *(unsigned int *)(param_1 + 0x28),0x8000000000000000 >> (param_2 + 0x20U & 0x7f));
}

