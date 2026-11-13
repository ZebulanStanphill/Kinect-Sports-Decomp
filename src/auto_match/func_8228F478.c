extern unsigned int *auStack_20;
extern int fn_82507908();
extern int fn_82535298();
extern int fn_82536288();


extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
void fn_8228F478(int param_1)

{
  unsigned int *puVar1;
  unsigned int auStack_20 [4];
  
  if (*(unsigned int *)(param_1 + 0x34) != 0) {
    puVar1 = (unsigned int *)fn_82507908(*(unsigned int *)(param_1 + 0x34));
    if (puVar1 != (unsigned int *)0x0) {
      auStack_20[0] = *puVar1;
      auStack_20[0] =
           fn_82535298(auStack_20,*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x84c),lbl_83296BC0,lbl_83296BD0);
      fn_82536288(auStack_20);
    }
  }
  return;
}

