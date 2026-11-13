extern int fn_8265CF70();
extern int fn_8265ED50();
extern int fn_8265F570();
extern unsigned int lbl_831E7A98;
extern unsigned int uStack00000014;
extern unsigned int uStack_10;
extern unsigned int uStack_c;


int fn_8266B430(unsigned int param_1)

{
  unsigned int uStack00000014;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  uStack_10 = 0;
  uStack00000014 = param_1;
  if (lbl_831E7A98 == 0x5c) {
    uStack_c = fn_8265ED50(0xffffffff831e7a9c);
    while (uStack_c != 0) {
      uStack_10 = uStack_10 + 1;
      fn_8265F570((unsigned __int64)uStack_c + 0x3c);
      uStack_c = fn_8265ED50();
    }
  }
  else {
    uStack_10 = fn_8265CF70(0xffffffff831e7af8);
  }
  return uStack_10;
}

