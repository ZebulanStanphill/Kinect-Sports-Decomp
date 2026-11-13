extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_8302B9E8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 0x18));
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

