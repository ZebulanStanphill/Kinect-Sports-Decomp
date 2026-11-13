extern unsigned int *lbl_83211720;


void fn_82868708(void)

{
  if (lbl_83211720 != (int *)0x0) {
    (*(int (**)())(*lbl_83211720 + 0x30))(lbl_83211720,1);
  }
  lbl_83211720 = (int *)0x0;
  return;
}

