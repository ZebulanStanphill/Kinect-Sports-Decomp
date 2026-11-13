extern int atexit();
extern unsigned int lbl_8200DAF4;
extern unsigned int *lbl_831F12C8;
extern unsigned int lbl_831F12CC;


extern int fn_8313FD88();

unsigned int * fn_826F3CF0(unsigned int *param_1,int param_2)

{
  if ((lbl_831F12CC & 1) == 0) {
    lbl_831F12CC = lbl_831F12CC | 1;
    lbl_831F12C8 = &lbl_8200DAF4;
    atexit(fn_8313FD88);
  }
  ((int (*)())lbl_831F12C8[1])(&lbl_831F12C8,param_2);
  param_1[1] = param_2;
  *param_1 = &lbl_831F12C8;
  return param_1;
}

