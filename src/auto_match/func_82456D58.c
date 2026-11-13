extern unsigned int *auStack_20;
extern int fn_8227CB30();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82F63108();


void fn_82456D58(int param_1,int param_2)

{
  int iVar1;
  unsigned int auStack_20 [4];
  
  if (*(int *)(param_1 + 0x70) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x70) + 0x1c) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(param_2 + 0x10) + 4))();
    }
    else {
      fn_8227CB30(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x70);
      *(unsigned int *)(iVar1 + 0x3c) = 1;
      *(unsigned int *)(iVar1 + 0x48) = 0;
      auStack_20[0] = *(unsigned int *)(param_1 + 0x74);
      auStack_20[0] =
           fn_82535298(auStack_20,**(unsigned int **)(param_1 + 0x78),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_20);
    }
  }
  return;
}

