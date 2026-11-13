extern int fn_825269D0();
extern int fn_825523D0();
extern int fn_8258FC38();
extern int (*lbl_83276784)();
extern int (*lbl_8327F654)();
extern unsigned int lbl_8327F674;
extern unsigned int lbl_8329618C;
extern int (*lbl_832961B4)();
extern unsigned int lbl_832961C8;


void fn_8251CA00(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  if (lbl_8329618C == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lbl_8329618C + 4);
  }
  if ((iVar1 == 0) || (lbl_832961C8 != 0)) {
    if ((int)param_1 == 4) {
      if (lbl_8327F654 != (int (**)())0x0) {
        (*lbl_8327F654)(lbl_8327F674,param_2,param_2);
      }
      fn_825269D0(0x1a,0);
      fn_825523D0();
      if (lbl_83276784 != (int (**)())0x0) {
        (*lbl_83276784)();
      }
      fn_825269D0(0x1b,0);
    }
  }
  else {
    fn_8258FC38(iVar1,param_1);
  }
  if (lbl_832961B4 != (int (**)())0x0) {
    (*lbl_832961B4)(iVar1);
  }
  return;
}

