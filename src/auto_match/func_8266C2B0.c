extern int fn_8266C340();
extern int free();
extern unsigned int iStack00000014;
extern unsigned int lbl_831E7B18;
extern int (*lbl_831E7B28)();


void fn_8266C2B0(int param_1)

{
  int iStack00000014;
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff8200298c,0x9a,0xffffffff82002a10);
  }
  if (lbl_831E7B18 == 0) {
    if (lbl_831E7B28 == (int (**)())0x0) {
      free(iStack00000014);
    }
    else {
      (*lbl_831E7B28)(iStack00000014);
    }
  }
  return;
}

