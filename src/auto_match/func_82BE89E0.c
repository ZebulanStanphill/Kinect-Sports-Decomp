extern int fn_82BF39A8();
extern int fn_82BF3F48();
extern unsigned int *lbl_8322B224;


void fn_82BE89E0(void)

{
  if (lbl_8322B224 != (unsigned int *)0x0) {
    (*(int (**)())*lbl_8322B224)(lbl_8322B224,1);
    lbl_8322B224 = (unsigned int *)0x0;
  }
  fn_82BF3F48();
  fn_82BF39A8();
  return;
}

