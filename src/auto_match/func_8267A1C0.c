extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int fn_8281B738();
extern unsigned int lbl_831E7B50;


void fn_8267A1C0(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      if (param_1[2] == 0) {
        fn_8262FEC8();
        *param_1 = 0;
        return;
      }
      param_1[2] = 0;
    }
    else {
      if (*(int *)(*param_1 + 4) != 1) {
        fn_8262FEC8();
        return;
      }
      RtlEnterCriticalSection(0xffffffff831e7b5c);
      fn_8281B738(lbl_831E7B50,param_1[1]);
      RtlLeaveCriticalSection(0xffffffff831e7b5c);
      param_1[1] = 0;
      fn_8265CA20(*param_1);
    }
    *param_1 = 0;
  }
  return;
}

