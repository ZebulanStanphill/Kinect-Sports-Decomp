extern int fn_82FA5190();
extern int fn_8304DCB8();
extern unsigned int lbl_831BC770;


void fn_83048578(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x5c) != 0) {
    fn_82FA5190(lbl_831BC770, *(unsigned int *)(param_1 + 0x5c));
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned short *)(param_1 + 0x60) = 0;
  }
  fn_8304DCB8(param_1);
  return;
}

