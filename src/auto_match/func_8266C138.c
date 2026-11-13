extern int fn_8265CF50();
extern int fn_8266C340();
extern int fn_82A29A38();
extern int malloc();
extern int _CxxThrowException();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int iStack_20;
extern unsigned int lbl_831E7B18;
extern unsigned int lbl_831E7B1C;
extern unsigned int lbl_831E7B20;
extern int (*lbl_831E7B24)();


/* WARNING: Removing unreachable block (ram,0x8266c24c) */

int fn_8266C138(int param_1)

{
  int *piVar1;
  int iStack00000014;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  iStack_20 = 0;
  iStack00000014 = param_1;
  if (lbl_831E7B18 == 0) {
    if (lbl_831E7B24 == (int (**)())0x0) {
      iStack_20 = malloc(param_1);
    }
    else {
      iStack_20 = (*lbl_831E7B24)(param_1);
    }
  }
  else if (param_1 <= lbl_831E7B1C - lbl_831E7B20) {
    iStack_20 = lbl_831E7B18 + lbl_831E7B20;
    lbl_831E7B20 = lbl_831E7B20 + param_1;
  }
  if (iStack_20 == 0) {
    piVar1 = (int *)fn_8265CF50(0xffffffff831e7a1c,1);
    iStack_18 = *piVar1;
    if (iStack_18 == 1) {
      fn_82A29A38();
    }
    else if (iStack_18 == 2) {
      fn_8266C340(0xffffffff820015c0,0xffffffff8200298c,0x77,0xffffffff820029a8);
    }
    else if (iStack_18 == 3) {
      pcStack_1c = "Memory allocation failed!";
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&pcStack_1c,0xffffffff821ddad0);
    }
  }
  return iStack_20;
}

