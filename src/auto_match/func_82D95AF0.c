extern void fn_82DBB990(void *, int);
extern void fn_82DBB890(void *, int);

void fn_82D95AF0(char *p, char flag)
{
  if (flag != 0) {
    fn_82DBB990(p, *(int *)(p + 8));
    return;
  }
  fn_82DBB890(p, *(int *)(p + 8));
}
