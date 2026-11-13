extern unsigned int *auStack_5e0;
extern int fn_824FD748();
extern int fn_825274F8();
extern int fn_82529508();
extern int fn_82536590();


void fn_824FD0F0(int param_1,int *param_2)

{
  int iVar1;
  unsigned char auStack_5e0 [1480];
  
  iVar1 = *param_2;
  if (iVar1 == 0x42) {
    if (param_2[2] == *(int *)(param_1 + 0xbb0)) {
      fn_825274F8(*(int *)(param_1 + 0xbb0),param_1,0xc);
    }
  }
  else {
    if (iVar1 == 0x45) {
      if (*(int *)(param_1 + 0xbbc) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82529508(auStack_5e0);
      }
      iVar1 = param_1 + 0xbc8;
    }
    else {
      if (iVar1 != 0x4b) goto LAB_824fd1b4;
      fn_82536590(param_1 + 0xbc4,0);
      iVar1 = param_1 + 0xbcc;
    }
    fn_82536590(iVar1,0);
  }
LAB_824fd1b4:
  fn_824FD748(param_1,param_2);
  return;
}

