extern int fn_82536590();
extern unsigned int lbl_821CA460;


void fn_82360850(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x2b20)) {
    iVar1 = *(int *)(param_1 + 0x2c9c);
    if (param_3 == 0) {
      if (iVar1 == 3) {
        if (param_4 == 0) {
          *(unsigned int *)(param_1 + 0x2c9c) = 0;
          *(unsigned int *)(param_1 + 0x2ca0) = lbl_821CA460;
          return;
        }
        fn_82536590(param_1 + 0x1488,0);
      }
      uVar2 = 1;
    }
    else {
      if ((iVar1 != 1) && (iVar1 != 0)) {
        return;
      }
      uVar2 = 2;
    }
    *(unsigned int *)(param_1 + 0x2c9c) = uVar2;
  }
  return;
}

