extern int atexit();
extern unsigned int lbl_8200DB14;
extern unsigned int *lbl_831F12D8;
extern unsigned int lbl_831F12DC;


extern int fn_8313FDB8();

unsigned int * fn_826F4070(unsigned int *param_1,int param_2)

{
  if ((lbl_831F12DC & 1) == 0) {
    lbl_831F12DC = lbl_831F12DC | 1;
    lbl_831F12D8 = &lbl_8200DB14;
    atexit(fn_8313FDB8);
  }
  ((int (*)())lbl_831F12D8[1])(&lbl_831F12D8,param_2);
  param_1[1] = param_2;
  *param_1 = &lbl_831F12D8;
  return param_1;
}

