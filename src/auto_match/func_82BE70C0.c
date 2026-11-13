extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;
extern unsigned int *lbl_8322B1D8;


void fn_82BE70C0(void)

{
  lbl_8322B1D0 = 0;
  lbl_8322B1C8 = 0;
  if (lbl_8322B1D8 != (unsigned int *)0x0) {
    (**(int (***)())*lbl_8322B1D8)(lbl_8322B1D8,1);
  }
  lbl_8322B1D8 = (unsigned int *)0x0;
  return;
}

