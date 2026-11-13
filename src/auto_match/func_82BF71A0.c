extern unsigned int lbl_831751D0;


void fn_82BF71A0(int *param_1,int param_2,int param_3)

{
  unsigned int iVar1;
  
  iVar1 = ((int (*)())lbl_831751D0)(param_2 * param_3 + 0xc);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *param_1;
    *param_1 = iVar1;
  }
  return;
}

