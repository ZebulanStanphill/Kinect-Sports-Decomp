extern int fn_82522ED8();
extern int fn_82CE11A0();
extern unsigned int iStack_60;
extern unsigned int lbl_821C1A4C;


unsigned int * fn_824F1588(unsigned int *param_1,unsigned int *param_2)

{
  int iStack_60;
  int aiStack_5c [19];

  param_1[1] = param_2;
  *param_1 = &lbl_821C1A4C;
  if (param_2 == (unsigned int *)0x0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = *param_2;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82CE11A0(0,0,10,&iStack_60,aiStack_5c);
  if ((aiStack_5c[0] != 0) && (iStack_60 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522ED8();
  }
  return param_1;
}
