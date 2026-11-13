void fn_82D61EB0(int param_1, short *param_2, unsigned int param_3)
{
  int i;
  for (i = 0; i < 3; i++) {
    if (((unsigned short *)param_2)[i] == (unsigned short)param_3) {
      param_2[i] = -1;
      return;
    }
  }
}
