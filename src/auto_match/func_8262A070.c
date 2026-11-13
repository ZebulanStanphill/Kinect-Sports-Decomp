extern int fn_82230110();
extern int fn_82230300();
extern int fn_82534820();
extern int fn_82865088();
extern unsigned int lbl_832993C0;
extern unsigned int lbl_832993C4;


void fn_8262A070(int *param_1)

{
  unsigned char auStack_40 [40];
  
  if (param_1 != (int *)0x0) {
    if ((lbl_832993C4 & 1) == 0) {
      lbl_832993C4 = lbl_832993C4 | 1;
      fn_82230110(auStack_40,"failed unhash");
      lbl_832993C0 = fn_82865088(auStack_40);
      fn_82230300(auStack_40,1,0);
    }
    if (*param_1 != lbl_832993C0) {
      fn_82534820(*param_1);
    }
  }
  return;
}

