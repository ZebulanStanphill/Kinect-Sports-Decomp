extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83013D98(int param_1)

{
  if (*(unsigned int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 4));
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  return 1;
}

