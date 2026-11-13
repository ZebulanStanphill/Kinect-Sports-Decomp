extern int fn_82FEF738(int);
extern void fn_83013DF0(unsigned, int, float);
extern unsigned int lbl_83264308;

void fn_8303A688(int p, float x)
{
  fn_82FEF738(*(int *)(p + 8));
  fn_83013DF0(lbl_83264308, *(int *)(*(int *)(p + 8) + 0x50), x);
}
