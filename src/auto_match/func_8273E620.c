extern int fn_826824B0();
extern int fn_826944C8();
extern unsigned int lbl_820121E0;


void fn_8273E620(int *param_1)

{
  __int64 lVar1;
  
  param_1[1] = (int)&lbl_820121E0;
  if (param_1[2] != 0) {
    fn_826824B0();
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(*param_1 + 8) - 1;
  *(int *)(*param_1 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8();
  }
  return;
}

