extern int fn_8263CBB0();
extern int fn_8267A5F0();


void fn_82676998(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x28) == 0) && (cVar1 = fn_8267A5F0(param_1), cVar1 == '\0')) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0xd8),0,0,0x80000000);
}

