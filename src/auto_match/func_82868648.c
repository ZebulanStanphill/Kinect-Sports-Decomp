extern unsigned int *lbl_8321171C;


void fn_82868648(void)

{
  if (lbl_8321171C != (int *)0x0) {
    (*(int (**)())(*lbl_8321171C + 0x40))(lbl_8321171C,1);
  }
  lbl_8321171C = (int *)0x0;
  return;
}

