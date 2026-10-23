extern void fn_82FA5190(int, void *);
extern void fn_83051648(int);
extern void fn_83055DD0(void);
extern int lbl_831BC978;

void fn_83053528(int param_1)
{
  fn_83055DD0();
  if (*(void **)(param_1 + 0xa0) != 0) {
    *(int *)(param_1 + 0x98) = 0;
    fn_82FA5190(lbl_831BC978, *(void **)(param_1 + 0xa0));
  }
  *(int *)(param_1 + 0x98) = 0;
  fn_83051648(param_1);
}
