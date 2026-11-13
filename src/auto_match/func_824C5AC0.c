typedef unsigned char bool;
extern int fn_82F63108();


bool fn_824C5AC0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  iVar1 = (**(int (***)())(**(int **)(param_1 + 0x18) + 4))();
  return iVar1 == 0;
}

