extern unsigned char lbl_821064D0[];


void fn_82CABDC8(int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
  *(unsigned char *)(*(int *)(param_1 + 4) * (param_3 & 1) + *(int *)(param_1 + 0xc) + param_2) =
       param_5 << 2 | lbl_821064D0[param_4] & 3;
  return;
}

