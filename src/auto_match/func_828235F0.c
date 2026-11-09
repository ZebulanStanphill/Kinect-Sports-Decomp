extern char lbl_8320A5DC[];
extern void fn_82823440(void);
extern void fn_82822510(void *table, void *callback, void *arg, void **out);
extern void fn_8281B738(void *found, void *arg);

void fn_828235F0(void *arg)
{
  void *found;
  fn_82822510(lbl_8320A5DC, (void *)fn_82823440, arg, &found);
  fn_8281B738(found, arg);
}
