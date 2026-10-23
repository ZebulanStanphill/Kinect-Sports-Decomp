extern void fn_82FA5190(int, void *);
extern void fn_8304E390(int);
extern int lbl_831BC770;

void fn_83048DB8(int param_1)
{
  *(unsigned short *)(param_1 + 0x62) = 0;
  if (*(void **)(param_1 + 0x5c) != 0) {
    fn_82FA5190(lbl_831BC770, *(void **)(param_1 + 0x5c));
    *(void **)(param_1 + 0x5c) = 0;
    *(unsigned short *)(param_1 + 0x60) = 0;
  }
  fn_8304E390(param_1);
}
