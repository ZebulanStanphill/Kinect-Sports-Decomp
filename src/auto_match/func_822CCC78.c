extern unsigned int *auStack_20;
extern int fn_82507908();
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_82536288();


void fn_822CCC78(int param_1)

{
  unsigned int *puVar1;
  unsigned int auStack_20 [4];
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar1 = (unsigned int *)fn_82507908();
    if (puVar1 != (unsigned int *)0x0) {
      auStack_20[0] = *puVar1;
      if (*(int *)(param_1 + 0x34) == 0) {
        auStack_20[0] =
             fn_82535298(auStack_20,**(unsigned int **)(param_1 + 8),0xffffffff83296bc0,
                               0xffffffff83296bd0);
      }
      else {
        auStack_20[0] =
             fn_825354B8(auStack_20,*(int *)(param_1 + 0x34),0,**(unsigned int **)(param_1 + 8),
                               0xffffffff83296bc0,0xffffffff83296bd0);
      }
      fn_82536288(auStack_20);
    }
  }
  return;
}

