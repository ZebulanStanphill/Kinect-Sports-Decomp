extern unsigned int lbl_82005C88;
extern unsigned int lbl_82005C8C;


unsigned __int64 fn_8268CB68(float *param_1)

{
  unsigned __int64 uVar1;
  
  if (((((*param_1 < lbl_82005C8C) || (lbl_82005C88 < *param_1)) || (param_1[1] < lbl_82005C8C)) ||
      ((((lbl_82005C88 < param_1[1] || (param_1[2] < lbl_82005C8C)) ||
        ((lbl_82005C88 < param_1[2] || ((param_1[3] < lbl_82005C8C || (lbl_82005C88 < param_1[3]))))
        )) || (param_1[4] < lbl_82005C8C)))) ||
     (((lbl_82005C88 < param_1[4] || (param_1[5] < lbl_82005C8C)) ||
      (uVar1 = 1, lbl_82005C88 < param_1[5])))) {
    uVar1 = 0;
  }
  return uVar1;
}

