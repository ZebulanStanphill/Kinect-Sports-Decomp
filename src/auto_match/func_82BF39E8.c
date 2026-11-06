extern void fn_82BFA8D8(void *);
extern void fn_82BFABC8(void *);
extern int fn_82BF3520(char *);
extern unsigned int fn_82BF3718(char *, unsigned int *);
extern void (*lbl_831751CC)(unsigned int);

int fn_82BF39E8(char *s, unsigned int *a, unsigned int *b)
{
  char guard[16];
  int r;
  fn_82BFA8D8(guard);
  if (s != 0 && *s != 0 && fn_82BF3520(s) != 0) {
    *b = fn_82BF3718(s, a);
    if (*b != 0) {
      fn_82BFABC8(guard);
      return 1;
    }
  }
  if (*a != 0) {
    lbl_831751CC(*a);
    *a = 0;
  }
  *b = 0;
  fn_82BFABC8(guard);
  return 0;
}
