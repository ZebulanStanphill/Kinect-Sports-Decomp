extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82079F30;


void fn_829F1960(int *param_1,int *param_2)

{
  float fVar1;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  fVar1 = in_register_00010014 * lbl_82079F30 * (lbl_82002AE0 / in_register_00010018) - lbl_82015BD8
  ;
  *param_1 = (int)(in_register_00010010 * lbl_82079F30 * (lbl_82002AE0 / in_register_00010018) +
                  lbl_82015BD0);
  *param_2 = (int)-fVar1;
  return;
}

