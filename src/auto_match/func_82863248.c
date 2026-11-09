extern unsigned char lbl_832116AE[];

void fn_82863248(int param_1, short param_2)
{
  lbl_832116AE[0] = 0;
  *(int *)(lbl_832116AE + 2) = param_1;
  *(short *)(lbl_832116AE - 2) = param_2;
}
