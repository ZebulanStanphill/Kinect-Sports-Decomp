extern unsigned int *auStack_10;
extern int fn_82535298();
extern int fn_82536288();


void fn_823C4DD0(int param_1)

{
  unsigned int uVar1;
  unsigned int auStack_10;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1028);
  if (uVar1 == 0) {
    auStack_10 = *(unsigned int *)(param_1 + 0x1014);
  }
  else if (uVar1 == 1) {
    auStack_10 = *(unsigned int *)(param_1 + 0x1018);
  }
  else if (uVar1 < 3) {
    auStack_10 = *(unsigned int *)(param_1 + 0x101c);
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    auStack_10 = *(unsigned int *)(param_1 + 0x1020);
  }
  auStack_10 =
       fn_82535298(&auStack_10,**(unsigned int **)(param_1 + 0xfe0),0xffffffff83296bc0,
                         0xffffffff83296bd0);
  fn_82536288(&auStack_10);
  return;
}

