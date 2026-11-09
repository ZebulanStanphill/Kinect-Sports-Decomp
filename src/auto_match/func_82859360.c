extern unsigned char lbl_83211326[];

void fn_82859360(int param_1, short param_2)
{
  lbl_83211326[0] = 0;
  *(int *)(lbl_83211326 + 2) = param_1;
  *(short *)(lbl_83211326 - 2) = param_2;
}
