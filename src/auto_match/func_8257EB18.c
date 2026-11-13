extern int fn_8265C9E0();
extern int fn_8265CAE0();
extern unsigned int lbl_832810EC;


void fn_8257EB18(void)

{
  __int64 lVar1;
  
  if (lbl_832810EC == 0) {
    lVar1 = fn_8265C9E0(1);
    if (lVar1 == 0) {
      lbl_832810EC = 0;
    }
    else {
      fn_8265CAE0();
      lbl_832810EC = (int)lVar1;
    }
  }
  return;
}

