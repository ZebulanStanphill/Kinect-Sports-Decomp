extern int fn_822315A0(unsigned int);
extern int fn_82671E20(unsigned int, unsigned int);
extern int fn_82671F28(unsigned int, unsigned int);
extern unsigned int lbl_8326B370[];

void fn_82271B78(unsigned int *param_1,unsigned int *param_2,int param_3,int param_4,unsigned int param_5)
{
  if (*param_1 != 0) {
    if (param_3 != 0) {
      fn_82671E20(*param_2, *param_1 + 0x198);
      if (param_4 != 0) {
        *(unsigned int *)(*param_1 + 0x1a0) = lbl_8326B370[9];
      }
      param_1[0x32] = param_5;
    }
    else {
      fn_82671F28(*param_2, *param_1 + 0x198);
      if (param_4 != 0) {
        *(unsigned int *)(*param_1 + 0x19c) = lbl_8326B370[9];
      }
      param_1[0x33] = param_5;
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0(param_2[1]);
  }
}
