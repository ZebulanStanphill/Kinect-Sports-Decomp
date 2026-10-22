extern int fn_82E815A0();


void fn_82E833A0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int uStack_20;
  int uStack_1c;
  int uStack_18;
  int uStack_14;
  
  if (*(int *)(param_1 + 4) == 8) {
    if (param_2 == 0) {
      iVar2 = fn_82E815A0(param_1,&uStack_20,&uStack_18,&uStack_1c,&uStack_14);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x780c) = 0;
        *(int *)(param_1 + 0x7820) = uStack_20;
        *(int *)(param_1 + 0x7824) = uStack_1c;
        *(int *)(param_1 + 0x7808) = 1;
        *(int *)(param_1 + 0x7840) = uStack_18;
        *(int *)(param_1 + 0x7844) = uStack_14;
        *(int *)(param_1 + 0x7800) = uStack_20 > 0;
        *(int *)(param_1 + 0x7804) = uStack_1c > 0;
      }
    }
    else if (param_3 != -1) {
      *(int *)(param_1 + 0x7804) = 1;
      *(int *)(param_1 + 0x7800) = 1;
      *(int *)(param_1 + 0x7808) = 1;
      *(int *)(param_1 + 0x780c) = 0;
      if (param_3 == 9) {
        *(int *)(param_1 + 0x7810) = 1;
        *(int *)(param_1 + 0x7840) = 1;
        *(int *)(param_1 + 0x7820) = 1;
        *(int *)(param_1 + 0x7844) = 2;
        *(int *)(param_1 + 0x7824) = 2;
      }
      else {
        *(int *)(param_1 + 0x7810) = 0;
        if (param_3 <= 8) {
          if (param_3 < 0) {
            param_3 = 0;
          }
        }
        else {
          param_3 = 8;
        }
        *(int *)(param_1 + 0x7844) = param_3;
        *(int *)(param_1 + 0x7824) = param_3;
        *(int *)(param_1 + 0x7840) = param_3;
        *(int *)(param_1 + 0x7820) = param_3;
      }
    }
    if (*(int *)(param_1 + 0x76c8) != 0) {
      iVar2 = *(int *)(param_1 + 0x7840);
      iVar1 = *(int *)(param_1 + 0x7844);
      if ((iVar2 != iVar1) &&
         ((iVar2 <= 0 || (((iVar2 >= 7 || (iVar1 != iVar2 + 2)) && ((iVar2 != 7 || (iVar1 != 8))))))))
      {
        *(int *)(param_1 + 0x7844) = iVar2;
      }
    }
    *(int *)(param_1 + 0x7828) = *(int *)(param_1 + 0x7820);
    *(int *)(param_1 + 0x782c) = *(int *)(param_1 + 0x7824);
    *(int *)(param_1 + 0x7848) = *(int *)(param_1 + 0x7840);
    *(int *)(param_1 + 0x784c) = *(int *)(param_1 + 0x7844);
  }
  return;
}
