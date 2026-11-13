extern unsigned int lbl_8217D360;
extern unsigned int lbl_8217D378;
extern unsigned int lbl_8217D390;


void fn_8303B290(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = &lbl_8217D360;
  *param_1 = &lbl_8217D390;
  param_1[1] = &lbl_8217D378;
  param_1[2] = param_2;
  *(unsigned char *)(param_1 + 3) = 0;
  return;
}

