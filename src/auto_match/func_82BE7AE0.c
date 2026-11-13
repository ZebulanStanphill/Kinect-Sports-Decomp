extern int fn_82BE5240(int, int, const char *, ...);
extern int fn_82BEE7D0(int, void *, void *, int);
extern int fn_82BF2D50(int);


extern char lbl_82196582[];
/* fn_82BE5240 is a variadic (ctx, code, fmt, ...) status setter. The two field
   resets are written in each arm: MSVC hoists them into one block but keeps the
   zero register live, which is why the original builds the string in r10. */
unsigned int fn_82BE7AE0(int param_1)
{
  int t[4];
  char buf[16];
  if (*(int *)(param_1 + 0x9c) == 0) return 0;
  t[0] = *(int *)(param_1 + 0x90);
  fn_82BEE7D0(2, t, buf, 0x10);
  if (fn_82BF2D50(param_1 + 0xa0) != 0) {
    *(int *)(param_1 + 0x9c) = 0;
    *(int *)(param_1 + 0x90) = 0;
    return 0;
  }
  *(int *)(param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0x90) = 0;
  return fn_82BE5240(param_1, 800, lbl_82196582);
}
