extern void *lbl_8322B4F4;
extern int fn_82BF3E28(void *, int);

int fn_82BF3FD0(int a)
{
  void *p = lbl_8322B4F4;
  if (p != 0) return fn_82BF3E28(p, a);
  return 0;
}
