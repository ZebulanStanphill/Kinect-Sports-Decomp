extern int fn_82CED2F8();
extern int fn_82CED628();
extern unsigned int lbl_82134134;


void fn_82D072F8(unsigned int *param_1)

{
  *param_1 = &lbl_82134134;
  *(unsigned short *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  fn_82CED2F8(param_1 + 0xb);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(param_1 + 0xb,0);
}

