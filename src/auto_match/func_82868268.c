extern unsigned int *lbl_83211700;


void fn_82868268(void)

{
  if (lbl_83211700 != (int *)0x0) {
    (*(int (**)())(*lbl_83211700 + 0x18))(lbl_83211700,1);
  }
  lbl_83211700 = (int *)0x0;
  return;
}

